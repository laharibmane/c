#include <stdio.h>

int main()
{
    int month;
    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    if (month == 2)
    {
        printf("February: 28 or 29 days\n");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("This month has 30 days\n");
    }
    else
    {
        printf("This month has 31 days\n");
    }

    return 0;
}