

int main(){
    int arr[3][3]={
        {1,2,3},
        {5,6,7},
        {9,9,0}
    };
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",arr[i][j]);
    }
    printf("/n");
    }
return 0;
}

//calculate the sum of all elemnts 
#include<stdio.h>
int main(){
int arr[3][3]={
    {1,2,3},
    {9,7,8},
    {7,8,9}
};
int sum =0;
 for (int i=0;i<0;i++){
    for(int j=0;j<0;j++){
        sum+=arr[i][j];
    }
    }
printf("the sum of all elements in the 2d array is:%d\n",sum);
return 0;
}

