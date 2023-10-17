#include<stdio.h>
void main(){
    int n,i=1,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);

    while(n>i){
        if(n%i==0){
        sum+=i;
        }
        i++;
    }

    if(sum==n){
        printf("%d is perfect number.",n);
    }
    else{
        printf("%d is not a perfect number.",n);
    }


}