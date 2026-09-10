#include <stdio.h>
int main(void)
{
	int number;
	int sum = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	for (int divisor = 1; divisor <= number / 2; divisor++) {
		if (number % divisor == 0) {
			sum += divisor;
		}
	}
	if (number > 1 && sum == number) {
		printf("%d is a perfect number.\n", number);
	} else {
		printf("%d is not a perfect number.\n", number);
	}
	return 0;
}
