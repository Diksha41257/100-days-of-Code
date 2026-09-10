#include <stdio.h>
int main(void)
{
	int number, original, digit, digits = 0;
	long long sum = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	if (number < 0) {
		printf("%d is not an Armstrong number.\n", number);
		return 0;
	}
	original = number;
	if (number == 0) {
		digits = 1;
	} else {
		for (int temp = number; temp != 0; temp /= 10) {
			digits++;
		}
	}
	for (int temp = number; temp != 0; temp /= 10) {
		digit = temp % 10;
		long long power = 1;
		for (int i = 0; i < digits; i++) {
			power *= digit;
		}
		sum += power;
	}
	if (sum == original) {
		printf("%d is an Armstrong number.\n", original);
	} else {
		printf("%d is not an Armstrong number.\n", original);
	}
	return 0;
}
