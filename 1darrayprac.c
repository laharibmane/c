#include <stdio.h>
int main(){
    int n;
    int arr[20];
    int i;
     printf("enter the value of number of elements u need");
     scanf("%d",&n);

     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }

     for(i=0;i<n;i++){
        printf("%d",arr[i]);
     }
     printf("\n");
     return 0;
}