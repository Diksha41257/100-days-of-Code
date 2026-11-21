#include <stdio.h>

int main(void)
{
	int rows, columns;

	printf("Enter the number of rows and columns: ");
	scanf("%d %d", &rows, &columns);

	int matrix[rows * columns];

	printf("Enter the matrix elements:\n");
	for (int i = 0; i < rows * columns; i++) {
		scanf("%d", &matrix[i]);
	}

	printf("The matrix is:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%d ", matrix[i * columns + j]);
		}
		printf("\n");
	}

	return 0;
}
