#include <stdio.h>

int maxofThree(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int a = 10, b = 20, c = 15;
    int result= maxofThree(a,b,c);
    printf("Maximum of %d, %d, %d is: %d\n", a, b, c,result);
    return 0;
}


