#include <stdio.h>
#include <string.h>
int main(void)
{
    char sentence[1000];

    if (fgets(sentence, sizeof(sentence), stdin) == NULL)
        return 0;

    size_t length = strlen(sentence);
    size_t start = 0;

    for (size_t i = 0; i <= length; i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '\t' ||
            sentence[i] == '\n' || sentence[i] == '\0')
        {
            size_t end = i;

            while (end > start)
            {
                char temp = sentence[start];
                sentence[start] = sentence[end - 1];
                sentence[end - 1] = temp;
                start++;
                end--;
            }

            start = i + 1;
        }
    }

    fputs(sentence, stdout);

    return 0;
}
