#include <stdio.h>
int main(void)
{
	int n;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("Invalid array size.\n");
		return 1;
	}

	int array[n];

	printf("Enter %d elements: ", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	for (int left = 0, right = n - 1; left < right; left++, right--) {
		int temp = array[left];
		array[left] = array[right];
		array[right] = temp;
	}

	printf("Reversed array: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}
