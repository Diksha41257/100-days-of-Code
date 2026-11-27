#include <stdio.h>
#include <string.h>
int main(void)
{
	char input[10000];

	if (fgets(input, sizeof(input), stdin) == NULL)
		return 0;

	/* Accept either a plain string or input such as: s = "abcabcbb". */
	char *text = strchr(input, '=');
	text = (text != NULL) ? text + 1 : input;

	while (*text == ' ' || *text == '\t')
		text++;

	size_t length;
	if (*text == '"' || *text == '\'') {
		char quote = *text++;
		char *end = strchr(text, quote);
		length = (end != NULL) ? (size_t)(end - text) : strcspn(text, "\r\n");
	} else {
		length = strcspn(text, "\r\n");
		while (length > 0 && (text[length - 1] == ' ' || text[length - 1] == '\t'))
			length--;
	}

	int last_seen[256];
	for (int i = 0; i < 256; i++)
		last_seen[i] = -1;

	int window_start = 0;
	int longest = 0;

	for (int i = 0; i < (int)length; i++) {
		unsigned char ch = (unsigned char)text[i];

		if (last_seen[ch] >= window_start)
			window_start = last_seen[ch] + 1;

		last_seen[ch] = i;
		int current_length = i - window_start + 1;
		if (current_length > longest)
			longest = current_length;
	}

	printf("%d\n", longest);
	return 0;
}
