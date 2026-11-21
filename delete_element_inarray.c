#include <stdio.h>

int main(void)
{
	int n, position;

	if (scanf("%d", &n) != 1 || n < 0)
		return 0;

	int array[n > 0 ? n : 1];
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &array[i]) != 1)
			return 0;
	}

	if (scanf("%d", &position) != 1 || position < 1 || position > n)
		return 0;

	for (int i = position - 1; i < n - 1; i++)
		array[i] = array[i + 1];

	for (int i = 0; i < n - 1; i++) {
		if (i > 0)
			printf(" ");
		printf("%d", array[i]);
	}
	printf("\n");

	return 0;
}
