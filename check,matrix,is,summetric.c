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

	int symmetric = (rows == cols);
	if (symmetric) {
		for (int i = 0; i < rows && symmetric; i++) {
			for (int j = i + 1; j < cols; j++) {
				if (matrix[i][j] != matrix[j][i]) {
					symmetric = 0;
					break;
				}
			}
		}
	}

	printf("%s\n", symmetric ? "True" : "False");
	return 0;
}
