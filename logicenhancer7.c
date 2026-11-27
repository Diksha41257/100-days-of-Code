#include <stdio.h>
int main(void)
{
	int n;

	printf("Enter the number of elements: ");
	if (scanf("%d", &n) != 1 || n <= 0) {
		return 0;
	}

	int arr[n];
	printf("Enter %d integers: ", n);
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			return 0;
		}
	}

	for (int i = 0; i < n; i++) {
		int previousGreater = -1;

		/* Scan leftward; the first greater value is the nearest one. */
		for (int j = i - 1; j >= 0; j--) {
			if (arr[j] > arr[i]) {
				previousGreater = arr[j];
				break;
			}
		}

		printf("%d%s", previousGreater, (i == n - 1) ? "\n" : ", ");
	}

	return 0;
}
