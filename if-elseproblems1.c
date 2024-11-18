// to find area of the rectangle is greater than perimeter,vice-versa
#include <stdio.h>

int main()
{
    float length, w#idth;
    printf("enter the length of the recatngle:");
    scanf("%f", &length);
    printf("enter the width of the rectangle: ");
    scanf("%f", &width);

    float area = length * width;
    float perimeter = 2 * (length + width);
    if (area > perimeter)
    {
        printf("area of the rectangle is greater than its perimeter.\n");
    }
    else
    {
        printf("perimeter of the rectangle is greater than its area.\n");
    }
    return 0;
}