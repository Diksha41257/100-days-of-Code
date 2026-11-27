#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n;

	if (scanf("%d", &n) != 1 || n <= 0) {
		return 0;
	}

	int *arr = malloc((size_t)n * sizeof(*arr));
	if (arr == NULL) {
		return 1;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			return 0;
		}
	}

	for (int i = 0; i < n; i++) {
		int nextGreater = -1;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[i]) {
				nextGreater = arr[j];
				break;
			}
		}

		if (i > 0) {
			printf(", ");
		}
		printf("%d", nextGreater);
	}
	printf("\n");

	free(arr);
	return 0;
}
