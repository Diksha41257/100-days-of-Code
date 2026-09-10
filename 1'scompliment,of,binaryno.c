#include <stdio.h>
int main(void)
{
	unsigned long long binary, divisor = 1;
	printf("Enter a binary number: ");
	if (scanf("%llu", &binary) != 1) {
		return 1;
	}
	if (binary == 0) {
		printf("1's complement: 1\n");
		return 0;
	}
	while (divisor <= binary / 10) {
		divisor *= 10;
	}
	printf("1's complement: ");
	for (; divisor > 0; divisor /= 10) {
		unsigned digit = (unsigned)((binary / divisor) % 10);

		if (digit != 0 && digit != 1) {
			printf("\nInvalid binary number.\n");
			return 1;
		}

		printf("%u", 1 - digit);
	}
	printf("\n");
	return 0;
}
