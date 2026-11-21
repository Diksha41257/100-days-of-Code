#include <stdio.h>
int main(void)
{
	int rows, columns;

	if (scanf("%d %d", &rows, &columns) != 2 || rows <= 0 || columns <= 0)
		return 0;

	int matrix[rows][columns];
	long long sum = 0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (scanf("%d", &matrix[i][j]) != 1)
				return 0;
			sum += matrix[i][j];
		}
	}

	printf("%lld\n", sum);
	return 0;
}
