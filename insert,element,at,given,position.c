#include <stdio.h>

int main(void)
{
	int array[100], size, element, position;

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	if (size < 0 || size >= 100) {
		printf("Invalid array size.\n");
		return 1;
	}

	printf("Enter %d elements: ", size);
	for (int i = 0; i < size; i++)
		scanf("%d", &array[i]);

	printf("Enter the element to insert: ");
	scanf("%d", &element);
	printf("Enter the position (1-%d): ", size + 1);
	scanf("%d", &position);

	if (position < 1 || position > size + 1) {
		printf("Invalid position.\n");
		return 1;
	}

	for (int i = size; i >= position; i--)
		array[i] = array[i - 1];

	array[position - 1] = element;
	size++;

	printf("Array after insertion: ");
	for (int i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");

	return 0;
}
