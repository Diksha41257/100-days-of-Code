#include <stdio.h>
int main(void)
{
    int n;
    int sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("Sum of array elements = %d\n", sum);
    return 0;
}