#include <stdio.h>
int main(void) {
    char date[11];

    if (scanf("%10s", date) == 1) {
        char day[3], month[3], year[5];
        const char *monthName[] = {
            "Jan", "Feb", "Mar", "Apr", "May", "Jun",
            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
        };

        day[0] = date[0];
        day[1] = date[1];
        day[2] = '\0';

        month[0] = date[3];
        month[1] = date[4];
        month[2] = '\0';

        year[0] = date[6];
        year[1] = date[7];
        year[2] = date[8];
        year[3] = date[9];
        year[4] = '\0';

        int m = (month[0] - '0') * 10 + (month[1] - '0');

        if (m >= 1 && m <= 12)
            printf("%s-%s-%s\n", day, monthName[m - 1], year);
    }

    return 0;
}
