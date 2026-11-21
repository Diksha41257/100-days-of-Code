#include <stdio.h>
#include <string.h>
int main(void) {
    char name[100];

    fgets(name, sizeof(name), stdin);

    int len = (int)strlen(name);
    int printInitial = 1;

    for (int i = 0; i < len; i++) {
        if (name[i] == '\n' || name[i] == '\r') {
            break;
        }

        if (printInitial && name[i] != ' ') {
            printf("%c.", name[i]);
            printInitial = 0;
        } else if (name[i] == ' ') {
            printInitial = 1;
        }
    }

    printf("\n");
    return 0;
}
