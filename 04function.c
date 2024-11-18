
#include<stdio.h>
float calculatearea(float length, float width);

int main(){
float l=3,w=2;
float area=calculatearea(l,w);
printf("the area is:%f\n",area);
return 0;
}
float calculatearea(float length,float width)
{
    return length*width;
}
