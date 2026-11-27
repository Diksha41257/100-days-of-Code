#include <stdio.h>
int main(void) {
	int n, k;

	if (scanf("%d", &n) != 1 || n <= 0) {
		return 0;
	}

	int arr[n];
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			return 0;
		}
	}

	if (scanf("%d", &k) != 1 || k < 1 || k > n) {
		return 0;
	}

	/* Selection sort: only the first k positions are needed. */
	for (int i = 0; i < k; i++) {
		int smallest = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[smallest]) {
				smallest = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[smallest];
		arr[smallest] = temp;
	}

	printf("%d\n", arr[k - 1]);
	return 0;
}
