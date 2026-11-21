#include <stdio.h>
int main(void) {
	int n, m;

	if (scanf("%d", &n) != 1 || n < 0) {
		return 1;
	}

	int first[n];
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &first[i]) != 1) {
			return 1;
		}
	}

	if (scanf("%d", &m) != 1 || m < 0) {
		return 1;
	}

	int second[m];
	for (int i = 0; i < m; i++) {
		if (scanf("%d", &second[i]) != 1) {
			return 1;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d", first[i]);
		if (i < n - 1 || m > 0) {
			printf(" ");
		}
	}
	for (int i = 0; i < m; i++) {
		printf("%d", second[i]);
		if (i < m - 1) {
			printf(" ");
		}
	}
	printf("\n");

	return 0;
}
