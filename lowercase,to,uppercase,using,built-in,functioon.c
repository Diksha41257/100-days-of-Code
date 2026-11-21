#include <stdio.h>
int main(void)
{
	char text[100];

	if (scanf("%99s", text) != 1) {
		return 0;
	}

	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] >= 'a' && text[i] <= 'z') {
			text[i] = text[i] - 'a' + 'A';
		}
	}

	printf("%s\n", text);
	return 0;
}
