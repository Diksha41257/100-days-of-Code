#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n;

	if (scanf("%d", &n) != 1 || n <= 0) {
		return 0;
	}

	long long *arr = malloc((size_t)n * sizeof(*arr));
	if (arr == NULL) {
		return 1;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%lld", &arr[i]) != 1) {
			free(arr);
			return 0;
		}
	}

	long long currentSum = arr[0];
	long long maxSum = arr[0];

	for (int i = 1; i < n; i++) {
		currentSum = (currentSum + arr[i] > arr[i])
						 ? currentSum + arr[i]
						 : arr[i];
		if (currentSum > maxSum) {
			maxSum = currentSum;
		}
	}

	printf("%lld\n", maxSum);
	free(arr);
	return 0;
}
