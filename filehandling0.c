#include <ctype.h>
#include <stdio.h>
int main(void)
{
	char str[1000];
	FILE *file = fopen("sentence.txt", "w+");

	if (file == NULL) {
		perror("Could not open sentence.txt");
		return 1;
	}

	printf("Enter a string: ");
	if (fgets(str, sizeof str, stdin) == NULL) {
		fclose(file);
		return 1;
	}

	if (fputs(str, file) == EOF) {
		perror("Could not write to sentence.txt");
		fclose(file);
		return 1;
	}

	rewind(file);

	int ch;
	int start_of_word = 1;
	while ((ch = fgetc(file)) != EOF) {
		if (isalpha((unsigned char)ch)) {
			ch = start_of_word ? toupper((unsigned char)ch)
							   : tolower((unsigned char)ch);
			start_of_word = 0;
		} else if (isspace((unsigned char)ch)) {
			start_of_word = 1;
		}
		putchar(ch);
	}

	fclose(file);
	return 0;
}
