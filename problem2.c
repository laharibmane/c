// determing the grade based on the marks obtained
#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks:");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("grade:A\n");
    }
    else if (marks >= 80)
    {
        printf("grade:B\n");
    }
    else if (marks >= 70)
    {
        printf("grade:C\n");
    }
    else if (marks >= 60)
    {
        printf("grade:D\n");
    }
    else
    {
        printf("grade:F\n");
    }
    return 0;
}