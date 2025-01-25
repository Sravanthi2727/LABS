#include <stdio.h>
#include <string.h>

int main() {
    char monthsA[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    char days[7][4] = {"Mon", "Tue", "Wed", "Thr", "Fri", "Sat", "Sun"};
    char months[4];
    int date, i, j, startDay[12] = {2,5,5,1,3,6,1,4,0,2,5,0};
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter a month in 3-letter code (e.g., Jan, Feb): ");
    scanf("%3s", months);

    int monthIndex = -1;
    for (i = 0; i < 12; i++) {
        if (stricmp(months, monthsA[i]) == 0) {
            monthIndex = i;
            break;
        }
    }
    //printf("%d \n", monthIndex);

    if (monthIndex == -1) {
        printf("Invalid month entered.\n");
        return 1;
    }

    for (i = 0; i < 7; i++) {
        printf("%s ", days[i]);
    }
    printf("\n");

    for (i = 0; i < startDay[monthIndex]; i++) {
        printf("    ");
    }

    for (date = 1; date <= daysInMonth[monthIndex]; date++) {
        printf("%2d  ", date);
        if ((date + startDay[monthIndex]) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}

