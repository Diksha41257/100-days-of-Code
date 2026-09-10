#include <stdio.h>
int main(void)
{
	long long number, digit, product = 1;
	int has_odd_digit = 0;
	printf("Enter a number: ");
	scanf("%lld", &number);
	if (number < 0)
		number = -number;
	for (; number != 0; number /= 10) {
		digit = number % 10;
		if (digit % 2 != 0) {
			product *= digit;
			has_odd_digit = 1;
		}
	}
	printf("Product of odd digits = %lld\n", has_odd_digit ? product : 0);
	return 0;
}
