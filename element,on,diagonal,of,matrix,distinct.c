#include <stdio.h>
#include <stdbool.h>
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int mat[100][100];
	int diag[200]; // To store diagonal elements, max n+m
	int count = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &mat[i][j]);
		}
	}

	// Collect diagonal elements
	for (int i = 0; i < n && i < m; i++) {
		diag[count++] = mat[i][i]; // Main diagonal
	}
	for (int i = 0; i < n && (m - 1 - i) >= 0; i++) {
		if (i != m - 1 - i) // Avoid double-counting center in odd square
			diag[count++] = mat[i][m - 1 - i]; // Secondary diagonal
	}

	// Check for distinctness
	bool isDistinct = true;
	for (int i = 0; i < count; i++) {
		for (int j = i + 1; j < count; j++) {
			if (diag[i] == diag[j]) {
				isDistinct = false;
				break;
			}
		}
		if (!isDistinct) break;
	}

	printf(isDistinct ? "True\n" : "False\n");
	return 0;
}
