#include <stdio.h>
int main(){
    int n;
    int arr[20];
    int sum=0;
    int i;
    printf("enter thhe values :");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    float average=(float)sum/n;  

    for(i=0;i<n;i++){
printf("%d",&arr[i]);
    }

    printf("\n the average of the array elements : %f\n",average);

    return 0;
}



