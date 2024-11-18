#include <stdio.h>
#define pi 3.14

float calculatearea(float radius) {
    return pi * radius * radius;
}

float calculatecircumference(float radius) {
    return 2 * pi * radius;
}

int main() {
    float radius = 3.5;
    float area = calculatearea(radius);  // Pass radius as an argument
    float circumference = calculatecircumference(radius);  // Pass radius as an argument
    
    printf("The area is %f\n", area);
    printf("The circumference is %f\n", circumference);
    
    return 0;
}



