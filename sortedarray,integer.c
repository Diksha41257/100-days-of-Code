#include <stdio.h>
int main(void)
{
	int n;
	int target;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("-1,-1\n");
		return 0;
	}

	int nums[n];

	printf("Enter the sorted elements: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}

	printf("Enter the target: ");
	scanf("%d", &target);

	int first = -1;
	int last = -1;

	/* Scan once; the first match sets first, and each match updates last. */
	for (int i = 0; i < n; i++) {
		if (nums[i] == target) {
			if (first == -1) {
				first = i;
			}
			last = i;
		}
	}

	printf("%d,%d\n", first, last);
	return 0;
}
