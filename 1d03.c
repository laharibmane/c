#include<stdio.h>
int main(){
    int n,i;
    int arr[100],sum=0;

    printf("enter the number od n values :");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];

    }


    for(i=0;i<n;i++){
        printf("%d"),arr[i];
    }

    printf("\nsum of the elements: %d\n",sum);
 return 0;
}



