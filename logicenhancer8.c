#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n;

	/* Enter the array size, followed by its elements. */
	if (scanf("%d", &n) != 1 || n <= 0) {
		return 0;
	}

	int *nums = malloc((size_t)n * sizeof(*nums));
	int *answer = malloc((size_t)n * sizeof(*answer));
	if (nums == NULL || answer == NULL) {
		free(nums);
		free(answer);
		return 1;
	}

	for (int i = 0; i < n; ++i) {
		if (scanf("%d", &nums[i]) != 1) {
			free(nums);
			free(answer);
			return 1;
		}
	}

	/* First pass: product of all values to the left of each index. */
	int prefix = 1;
	for (int i = 0; i < n; ++i) {
		answer[i] = prefix;
		prefix *= nums[i];
	}

	/* Second pass: multiply by the product of values to the right. */
	int suffix = 1;
	for (int i = n - 1; i >= 0; --i) {
		answer[i] *= suffix;
		suffix *= nums[i];
	}

	printf("[");
	for (int i = 0; i < n; ++i) {
		printf("%d%s", answer[i], i == n - 1 ? "" : ",");
	}
	printf("]\n");

	free(nums);
	free(answer);
	return 0;
}
