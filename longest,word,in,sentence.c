#include <stdio.h>
#include <string.h>
int main(void) {
	char sentence[1000];

	if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
		return 0;
	}

	char longest[1000] = "";
	char *word = strtok(sentence, " \t\n\r");

	while (word != NULL) {
		if (strlen(word) > strlen(longest)) {
			strcpy(longest, word);
		}
		word = strtok(NULL, " \t\n\r");
	}

	printf("%s\n", longest);
	return 0;
}
