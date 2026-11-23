#include <stdio.h>
#include <time.h>

int main()
{
    int year, month, day, i, startDay;
    int days[] = {31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};

    char *months[] = {"January", "February", "March",
                      "April", "May", "June", "July",
                      "August", "September", "October",
                      "November", "December"};

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year < 1)
    {
        printf("Enter a valid year.\n");
        return 1;
    }

    if (year % 400 == 0 ||
       (year % 4 == 0 && year % 100 != 0))
        days[1] = 29;

    struct tm t = {0};
    t.tm_year = year - 1900;
    t.tm_mon = 0;
    t.tm_mday = 1;
    t.tm_isdst = -1;

    mktime(&t);
    startDay = t.tm_wday;

    for (month = 0; month < 12; month++)
    {
        printf("\n\n%s %d\n", months[month], year);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for (i = 0; i < startDay; i++)
            printf("    ");

        for (day = 1; day <= days[month]; day++)
        {
            printf("%3d ", day);

            if ((startDay + day) % 7 == 0)
                printf("\n");
        }

        startDay = (startDay + days[month]) % 7;
        printf("\n");
    }

    return 0;
}
