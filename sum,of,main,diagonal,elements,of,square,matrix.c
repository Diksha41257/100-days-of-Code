#include <stdio.h>
int main(void) {
	int rows, cols;
	if (scanf("%d %d", &rows, &cols) != 2 || rows != cols || rows <= 0) {
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

	int sum = 0;
	for (int i = 0; i < rows; i++) {
		sum += matrix[i][i];
	}

	printf("%d\n", sum);
	return 0;
}
