#include<stdio.h>
void main(){
    int n,rem=0,digit,temp=0,a;
    printf("Enter the number:");
    scanf("%d",&n);

    while(n!=0){
        digit=n%10;
        temp=(temp*10)+digit;
        n=n/10;
    }
    n=temp;

    printf("%d",temp);
}