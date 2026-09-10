#include <stdio.h>
int main(void)
{
	int i, j;
	for (i = 1; i <= 7; i++) {
		int level = (i <= 4) ? i : 8 - i;
		for (j = 1; j <= 4 - level; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * level - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
