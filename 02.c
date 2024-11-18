#include<stdio.h>
int main(){
    int a [10],b[10],c[10],m,n,i;

    printf("enter the values ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the values");
    scanf("%d",&m);

    for(i=0;i<m;i++){
    scanf("%d",&b[i]);}

    if(m==n){
        for(i=0;i<m;i++){
            c[i]=a[i]+b[i];
        }
    printf("sum of given array elements");
    for(i=0;i<n;i++){
        printf("%d\n",c[i]);

    }
    } else{ printf("cannot add");
    }
    return 0;

        }   


    