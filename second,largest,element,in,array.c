#include <stdio.h>
int main(void)
{
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Please enter at least two elements.\n");
        return 1;
    }

    int array[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &array[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    int largest = array[0];
    int second_largest = 0;
    int found_second = 0;

    for (int i = 1; i < n; i++) {
        if (array[i] > largest) {
            second_largest = largest;
            largest = array[i];
            found_second = 1;
        } else if (array[i] < largest &&
                   (!found_second || array[i] > second_largest)) {
            second_largest = array[i];
            found_second = 1;
        }
    }

    if (found_second) {
        printf("Second largest element: %d\n", second_largest);
    } else {
        printf("No second distinct largest element exists.\n");
    }

    return 0;
}