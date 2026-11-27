#include <stdio.h>
#include <stdlib.h>
long long maxSubarraySum(const int arr[], int n, int k)
{
	long long windowSum = 0;
	long long maxSum;

	for (int i = 0; i < k; i++)
		windowSum += arr[i];

	maxSum = windowSum;
	for (int i = k; i < n; i++) {
		windowSum += arr[i] - arr[i - k];
		if (windowSum > maxSum)
			maxSum = windowSum;
	}

	return maxSum;
}

int main(void)
{
	int n, k;

	if (scanf("%d", &n) != 1 || n <= 0)
		return 0;

	int *arr = malloc((size_t)n * sizeof(*arr));
	if (arr == NULL)
		return 1;

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			return 0;
		}
	}

	if (scanf("%d", &k) != 1) {
		free(arr);
		return 0;
	}

	if (k >= 1 && k <= n)
		printf("%lld\n", maxSubarraySum(arr, n, k));

	free(arr);
	return 0;
}
