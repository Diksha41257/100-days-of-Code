#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000

int main(void) {
	char first[MAX_LENGTH], second[MAX_LENGTH];

	if (scanf("%999s %999s", first, second) != 2) {
		return 0;
	}

	size_t first_length = strlen(first);
	size_t second_length = strlen(second);

	if (first_length == second_length) {
		char doubled[2 * MAX_LENGTH];
		strcpy(doubled, first);
		strcat(doubled, first);

		if (strstr(doubled, second) != NULL) {
			printf("Rotation\n");
		} else {
			printf("Not rotation\n");
		}
	} else {
		printf("Not rotation\n");
	}

	return 0;
}
