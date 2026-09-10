#include <stdio.h>
int main(void)
{
    double first, second;
    char operator;
    printf("Enter an expression (number operator number): ");
    if (scanf("%lf %c %lf", &first, &operator, &second) != 3) {
        printf("Invalid input.\n");
        return 1;
    }
    switch (operator) {
    case '+':
        printf("Result: %.2f\n", first + second);
        break;
    case '-':
        printf("Result: %.2f\n", first - second);
        break;
    case '*':
        printf("Result: %.2f\n", first * second);
        break;
    case '/':
        if (second == 0) {
            printf("Error: division by zero.\n");
            return 1;
        }
        printf("Result: %.2f\n", first / second);
        break;
    case '%':
        if ((int)second == 0) {
            printf("Error: modulo by zero.\n");
            return 1;
        }
        printf("Result: %d\n", (int)first % (int)second);
        break;
    default:
        printf("Invalid operator.\n");
        return 1;
    }
    return 0;
}