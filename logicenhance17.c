#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int m, n;

	/* Input: m n, followed by m sorted values and then n sorted values. */
	if (scanf("%d %d", &m, &n) != 2 || m < 0 || n < 0)
		return 1;

	int *nums1 = m ? malloc((size_t)m * sizeof(*nums1)) : NULL;
	int *nums2 = n ? malloc((size_t)n * sizeof(*nums2)) : NULL;
	size_t total = (size_t)m + (size_t)n;
	int *merged = total ? malloc(total * sizeof(*merged)) : NULL;

	if ((m && !nums1) || (n && !nums2) || (total && !merged)) {
		free(nums1);
		free(nums2);
		free(merged);
		return 1;
	}

	for (int i = 0; i < m; ++i) {
		if (scanf("%d", &nums1[i]) != 1)
			goto input_error;
	}
	for (int i = 0; i < n; ++i) {
		if (scanf("%d", &nums2[i]) != 1)
			goto input_error;
	}

	int i = 0, j = 0;
	size_t k = 0;
	while (i < m && j < n) {
		if (nums1[i] <= nums2[j])
			merged[k++] = nums1[i++];
		else
			merged[k++] = nums2[j++];
	}
	while (i < m)
		merged[k++] = nums1[i++];
	while (j < n)
		merged[k++] = nums2[j++];

	for (size_t index = 0; index < k; ++index)
		printf("%d%c", merged[index], index + 1 == k ? '\n' : ' ');
	if (k == 0)
		putchar('\n');

	free(nums1);
	free(nums2);
	free(merged);
	return 0;

input_error:
	free(nums1);
	free(nums2);
	free(merged);
	return 1;
}
