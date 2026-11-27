#include <stdio.h>
#include <stdlib.h>
/* Input: array length followed by that many integers. */
int main(void)
{
	int n;
	if (scanf("%d", &n) != 1 || n < 2) {
		return 1;
	}

	int *seen = calloc((size_t)n, sizeof(*seen));
	if (seen == NULL) {
		return 1;
	}

	/* For the stated array pattern, values are in the range [0, n-1]. */
	for (int i = 0; i < n; ++i) {
		int value;
		if (scanf("%d", &value) != 1) {
			free(seen);
			return 1;
		}
		if (value >= 0 && value < n) {
			if (seen[value]) {
				printf("%d\n", value);
				free(seen);
				return 0;
			}
			seen[value] = 1;
		}
	}

	free(seen);
	return 0;
}
