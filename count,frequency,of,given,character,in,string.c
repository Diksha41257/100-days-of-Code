#include <stdio.h>
#include <string.h>
int main(void)
{
	char text[1000];
	char target;
	int count = 0;

	if (fgets(text, sizeof(text), stdin) == NULL || scanf(" %c", &target) != 1) {
		return 1;
	}

	for (size_t i = 0; i < strlen(text); i++) {
		if (text[i] == target) {
			count++;
		}
	}

	printf("%d\n", count);
	return 0;
}
