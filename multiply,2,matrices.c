#include <stdio.h>
int main(void) {
	int rows1, cols1, rows2, cols2;
	int first[100][100], second[100][100], product[100][100] = {0};

	if (scanf("%d %d", &rows1, &cols1) != 2 ||
		rows1 < 1 || rows1 > 100 || cols1 < 1 || cols1 > 100) {
		return 0;
	}

	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			if (scanf("%d", &first[i][j]) != 1) return 0;
		}
	}

	if (scanf("%d %d", &rows2, &cols2) != 2 ||
		rows2 < 1 || rows2 > 100 || cols2 < 1 || cols2 > 100 ||
		cols1 != rows2) {
		return 0;
	}

	for (int i = 0; i < rows2; i++) {
		for (int j = 0; j < cols2; j++) {
			if (scanf("%d", &second[i][j]) != 1) return 0;
		}
	}

	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols2; j++) {
			for (int k = 0; k < cols1; k++) {
				product[i][j] += first[i][k] * second[k][j];
			}
		}
	}

	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols2; j++) {
			if (j > 0) printf(" ");
			printf("%d", product[i][j]);
		}
		printf("\n");
	}

	return 0;
}
