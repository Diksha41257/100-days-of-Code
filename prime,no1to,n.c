#include <stdio.h>
int main(void)
{
	int n;
	int number;
	int divisor;
	int is_prime;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Prime numbers from 1 to %d are:\n", n);
	for (number = 2; number <= n; number++)
	{
		is_prime = 1;
		for (divisor = 2; divisor * divisor <= number; divisor++)
		{
			if (number % divisor == 0)
			{
				is_prime = 0;
				break;
			}
		}
		if (is_prime)
		{
			printf("%d ", number);
		}
	}
	return 0;
}
