#include <stdio.h>
int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Factors of %d are: ", number);
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}