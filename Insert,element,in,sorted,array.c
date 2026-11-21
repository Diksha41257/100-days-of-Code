#include <stdio.h>
#define MAX_SIZE 100
int main(void)
{
    int array[MAX_SIZE];
    int n, element, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 0 || n >= MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    i = n - 1;
    while (i >= 0 && array[i] > element) {
        array[i + 1] = array[i];
        i--;
    }
    array[i + 1] = element;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}