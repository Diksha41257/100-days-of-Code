#include <stdio.h>
#include <string.h>
int main(void) {
    char line[256];
    char *words[64];
    int count = 0;

    if (fgets(line, sizeof(line), stdin) == NULL) {
        return 0;
    }

    char *word = strtok(line, " \t\r\n");
    while (word != NULL && count < 64) {
        words[count++] = word;
        word = strtok(NULL, " \t\r\n");
    }

    if (count == 0) {
        return 0;
    }

    for (int i = 0; i < count - 1; i++) {
        printf("%c.", words[i][0]);
    }
    printf(" %s\n", words[count - 1]);

    return 0;
}