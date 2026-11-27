#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n;

	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("-1\n");
		return 0;
	}

	int *nums = malloc((size_t)n * sizeof(*nums));
	if (nums == NULL) {
		return 1;
	}

	long long total = 0;
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nums[i]) != 1) {
			free(nums);
			return 1;
		}
		total += nums[i];
	}

	long long leftSum = 0;
	int pivotIndex = -1;
	for (int i = 0; i < n; i++) {
		long long rightSum = total - leftSum - nums[i];
		if (leftSum == rightSum) {
			pivotIndex = i;
			break;
		}
		leftSum += nums[i];
	}

	printf("%d\n", pivotIndex);
	free(nums);
	return 0;
}
