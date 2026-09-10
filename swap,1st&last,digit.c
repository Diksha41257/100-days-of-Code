#include <stdio.h>
int main(void)
{
	long long number, divisor = 1, first, last, middle, result;
	printf("Enter a number: ");
	scanf("%lld", &number);
	if (number < 0)
		number = -number;
	if (number < 10) {
		result = number;
	} else {
		for (long long temp = number; temp >= 10; temp /= 10)
			divisor *= 10;
		first = number / divisor;
		last = number % 10;
		middle = (number % divisor) / 10;
		result = last * divisor + middle * 10 + first;
	}
	printf("After swapping the first and last digit: %lld\n", result);
	return 0;
}
