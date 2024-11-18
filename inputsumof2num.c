include<stdio.h> 
int main()
{
    int x;
    printf("enter first number\n");
    scanf("%d", &x);
    int y;
    printf("enter second number\n");
    scanf("%d", &y);
    int sum = x + y;
    printf("sum of the numbers:%d", sum);
    return 0;
}