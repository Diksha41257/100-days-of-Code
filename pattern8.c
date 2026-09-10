#include <stdio.h>
int main(void)
{
	int row, count;
	for (row = 1; row <= 9; row += 2) {
		for (count = 1; count <= row; count++) {
			putchar('*');
		}
		putchar('\n');
	}
	for (row = 7; row >= 1; row -= 2) {
		for (count = 1; count <= row; count++) {
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}
