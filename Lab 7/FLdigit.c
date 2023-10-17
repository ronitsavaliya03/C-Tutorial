#include<stdio.h>
void main(){
    int n,a,b,sum;
    printf("Enter the number:");
    scanf("%d",&n);

    a=n%10;
    while(n>=9){
        n=n/10;
    }
    b=n;
    sum=a+b;
    printf("%d+%d=%d",a,b,sum);
}