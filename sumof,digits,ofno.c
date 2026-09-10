#include <stdio.h>
int main(void)
{
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0)
        number = -number;

    for (; number != 0; number /= 10)
        sum += number % 10;

    printf("Sum of digits = %d\n", sum);
    return 0;
}