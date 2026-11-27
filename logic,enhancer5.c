#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n;

	/* Input: n followed by n integers. */
	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("-1\n");
		return 0;
	}

	int *nums = malloc((size_t)n * sizeof(*nums));
	if (nums == NULL) {
		return 1;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nums[i]) != 1) {
			free(nums);
			printf("-1\n");
			return 0;
		}
	}

	/* Boyer-Moore majority vote finds a candidate in O(n) time. */
	int candidate = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (count == 0) {
			candidate = nums[i];
			count = 1;
		} else if (nums[i] == candidate) {
			count++;
		} else {
			count--;
		}
	}

	/* Verify the candidate because a majority may not exist. */
	count = 0;
	for (int i = 0; i < n; i++) {
		if (nums[i] == candidate) {
			count++;
		}
	}

	printf("%d\n", count > n / 2 ? candidate : -1);
	free(nums);
	return 0;
}
