#include <stdio.h>
int main(void)
{
	int group, star;
	for (group = 1; group <= 5; group++) {
		int count = group <= 3 ? (2 * group - 1) : (2 * (5 - group) + 1);

		for (star = 1; star <= count; star++) {
			printf("*\n");
		}

		if (group < 5) {
			printf("\n");
		}
	}
	return 0;
}
