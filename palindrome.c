 #include <stdio.h>
int main(void)
{
	int number, original, reversed = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	original = number;
	for (; number != 0; number /= 10) {
		reversed = reversed * 10 + number % 10;
	}
	if (original == reversed) {
		printf("%d is a palindrome.\n", original);
	} else {
		printf("%d is not a palindrome.\n", original);
	}
	return 0;
}
