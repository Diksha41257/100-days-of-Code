#include <stdio.h>
int main(void)
{
	unsigned int number;
	unsigned int place = 1;
	int started = 0;
	printf("Enter a non-negative integer: ");
	scanf("%u", &number);
	if (number == 0) {
		printf("Binary: 0\n");
		return 0;
	}
	for (unsigned int value = number; value > 1; value /= 2)
		place *= 2;
	printf("Binary: ");
	for (; place > 0; place /= 2) {
		if (number >= place) {
			printf("1");
			number -= place;
		} else {
			printf("0");
		}
	}
	printf("\n");
	return 0;
}
