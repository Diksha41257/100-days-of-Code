#include <stdio.h>
#define MAX_SIZE 100
int main(void) {
    int array[MAX_SIZE];
    int size, target;

    printf("Enter the number of elements (1-%d): ", MAX_SIZE);
    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &array[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter the element to search for: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            printf("Element found at index %d (position %d).\n", i, i + 1);
            return 0;
        }
    }

    printf("Element not found in the array.\n");
    return 0;
}