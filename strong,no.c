#include <stdio.h>
int main(void)
{
	int number, original, digit;
	int sum = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	if (number < 0) {
		printf("%d is not a strong number.\n", number);
		return 0;
	}
	original = number;
	if (number == 0) {
		sum = 1;
	}
	for (; number > 0; number /= 10) {
		digit = number % 10;
		int factorial = 1;
		for (int i = 1; i <= digit; i++) {
			factorial *= i;
		}
		sum += factorial;
	}
	if (sum == original) {
		printf("%d is a strong number.\n", original);
	} else {
		printf("%d is not a strong number.\n", original);
	}
	return 0;
}
