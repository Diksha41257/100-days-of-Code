#include <stdio.h>
int main(void)
{
	long long number;
	int frequency[10] = {0};

	if (scanf("%lld", &number) != 1)
		return 0;

	unsigned long long value = number < 0
		? (unsigned long long)(-(number + 1)) + 1
		: (unsigned long long)number;

	if (value == 0) {
		frequency[0] = 1;
	} else {
		while (value > 0) {
			frequency[value % 10]++;
			value /= 10;
		}
	}

	int digit = 0;
	for (int i = 1; i <= 9; i++) {
		if (frequency[i] > frequency[digit])
			digit = i;
	}

	printf("%d\n", digit);
	return 0;
}
