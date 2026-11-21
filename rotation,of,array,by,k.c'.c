#include <stdio.h>
int main(void)
{
    int n, k;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int array[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &array[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter the number of positions to rotate right: ");
    if (scanf("%d", &k) != 1) {
        printf("Invalid rotation count.\n");
        return 1;
    }

    /* Normalize k so rotations larger than the array still work. */
    k %= n;
    if (k < 0) {
        k += n;
    }

    /* Reverse the whole array, then each part, to rotate right by k. */
    for (int left = 0, right = n - 1; left < right; left++, right--) {
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;
    }
    for (int left = 0, right = k - 1; left < right; left++, right--) {
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;
    }
    for (int left = k, right = n - 1; left < right; left++, right--) {
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;
    }

    printf("Array after right rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}