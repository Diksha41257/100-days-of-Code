#include <ctype.h>
#include <stdio.h>
int main(void)
{
    char text[1000];
    int vowels = 0;
    int consonants = 0;

    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 0;
    }

    for (int i = 0; text[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)text[i];
        if (isalpha(ch)) {
            ch = (unsigned char)tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}