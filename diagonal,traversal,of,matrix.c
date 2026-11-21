#include <stdio.h>
int main(void) {
	int rows, cols;

	if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
		return 0;
	}

	int matrix[rows][cols];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (scanf("%d", &matrix[i][j]) != 1) {
				return 0;
			}
		}
	}

	int first = 1;
	for (int sum = 0; sum < rows + cols - 1; sum++) {
		int row = sum < rows ? sum : rows - 1;
		int col = sum - row;

		while (row >= 0 && col < cols) {
			if (!first) {
				printf(" ");
			}
			printf("%d", matrix[row][col]);
			first = 0;
			row--;
			col++;
		}
	}

	printf("\n");
	return 0;
}
