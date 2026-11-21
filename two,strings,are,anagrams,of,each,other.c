#include <stdio.h>
#include <string.h>
#define SIZE 1000

int main(void)
{
	char first[SIZE], second[SIZE];
	int frequency[256] = {0};

	if (fgets(first, sizeof(first), stdin) == NULL ||
		fgets(second, sizeof(second), stdin) == NULL) {
		return 0;
	}

	first[strcspn(first, "\r\n")] = '\0';
	second[strcspn(second, "\r\n")] = '\0';

	if (strlen(first) != strlen(second)) {
		puts("Not anagrams");
		return 0;
	}

	for (size_t i = 0; first[i] != '\0'; ++i) {
		++frequency[(unsigned char)first[i]];
		--frequency[(unsigned char)second[i]];
	}

	for (int i = 0; i < 256; ++i) {
		if (frequency[i] != 0) {
			puts("Not anagrams");
			return 0;
		}
	}

	puts("Anagrams");
	return 0;
}
