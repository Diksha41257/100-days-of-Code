#include <stdio.h>
int main(void)
{
	int first, second, lcm, larger;
	printf("Enter two numbers: ");
	scanf("%d %d", &first, &second);
	if (first == 0 || second == 0)
	{
		lcm = 0;
	}
	else
	{
		first = first < 0 ? -first : first;
		second = second < 0 ? -second : second;
		larger = first > second ? first : second;
		for (lcm = larger;
			 lcm % first != 0 || lcm % second != 0;
			 lcm += larger)
		{
		}
	}
	printf("LCM = %d\n", lcm);
	return 0;
}
