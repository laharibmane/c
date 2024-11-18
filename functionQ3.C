#include<stdio.h> //by passing the refernces 
#define pi 3.14 
void areaAndcircumference(float radius, float *area, float *circumference){
    *area= pi*radius*radius;
    *circumference=2*pi*radius;
}
    int main(){
        float radius = 7.0;
         float area,circumference;
areaAndcircumference(radius,&area,&circumference);
printf("area:%.2f\n",area);
printf("circumference:%2.2f",circumference);
return 0;

    }