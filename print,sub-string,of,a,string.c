#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[1000];

    if (scanf("%999s", str) != 1)
        return 0;

    int len = (int)strlen(str);
    int first = 1;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (!first)
                printf(",");

            for (int k = i; k <= j; k++)
                putchar(str[k]);

            first = 0;
        }
    }

    printf("\n");
    return 0;
}