#include <stdio.h>
int main(void)
{
	int number;
	int reversed = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	for (; number != 0; number /= 10) {
		reversed = reversed * 10 + number % 10;
	}
	printf("Reversed number: %d\n", reversed);
	return 0;
}
