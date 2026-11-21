#include <stdio.h>
#include <string.h>
int main(void) {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    str[strcspn(str, "\n")] = '\0';

    int left = 0;
    int right = (int)strlen(str) - 1;
    int is_palindrome = 1;

    while (left < right) {
        if (str[left] != str[right]) {
            is_palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    puts(is_palindrome ? "Palindrome" : "Not palindrome");
    return 0;
}