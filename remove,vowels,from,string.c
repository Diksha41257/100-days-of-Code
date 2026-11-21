#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[1000];

    scanf("%999s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            printf("%c", ch);
        }
    }

    printf("\n");
    return 0;
}
