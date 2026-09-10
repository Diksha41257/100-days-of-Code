#include <stdio.h>
int main(void)
{
    int n, even = 0, odd = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    return 0;
}