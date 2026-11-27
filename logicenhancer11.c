#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n, k;

	/* Input: n, followed by n array elements, then k. */
	if (scanf("%d", &n) != 1 || n <= 0)
		return 0;

	int *arr = malloc((size_t)n * sizeof(*arr));
	int *negativeIndices = malloc((size_t)n * sizeof(*negativeIndices));
	if (arr == NULL || negativeIndices == NULL) {
		free(arr);
		free(negativeIndices);
		return 1;
	}

	for (int i = 0; i < n; ++i) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			free(negativeIndices);
			return 0;
		}
	}

	if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
		free(arr);
		free(negativeIndices);
		return 0;
	}

	int front = 0, back = 0;

	for (int i = 0; i < n; ++i) {
		if (arr[i] < 0)
			negativeIndices[back++] = i;

		/* Remove negative values that are no longer in this window. */
		while (front < back && negativeIndices[front] <= i - k)
			++front;

		if (i >= k - 1) {
			if (front < back)
				printf("%d", arr[negativeIndices[front]]);
			else
				printf("0");

			if (i < n - 1)
				putchar(' ');
		}
	}

	putchar('\n');
	free(arr);
	free(negativeIndices);
	return 0;
}
