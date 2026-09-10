#include <stdio.h>
int main(void)
{
    int n, i;
    int positive = 0, negative = 0, zero = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);

        if (array[i] > 0)
            positive++;
        else if (array[i] < 0)
            negative++;
        else
            zero++;
    }
    printf("Positive elements: %d\n", positive);
    printf("Negative elements: %d\n", negative);
    printf("Zero elements: %d\n", zero);
    return 0;
}