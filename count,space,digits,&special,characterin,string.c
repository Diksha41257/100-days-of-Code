#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char str[1000];
	int spaces = 0, digits = 0, special = 0;
	int ch;
	size_t i;

	/* Read the entire line so spaces are included. */
	if (fgets(str, sizeof str, stdin) == NULL)
		return 0;

	for (i = 0; str[i] != '\0' && str[i] != '\n'; ++i) {
		unsigned char c = (unsigned char)str[i];
		if (c == ' ')
			++spaces;
		else if (isdigit(c))
			++digits;
		else if (!isalnum(c))
			++special;
	}

	printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
	return 0;
}
