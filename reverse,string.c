#include <stdio.h>
#include <string.h>
int main(void) {
    char str[1000];

    if (scanf("%999s", str) != 1)
        return 0;

    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--)
        printf("%c", str[i]);

    printf("\n");
    return 0;
}
