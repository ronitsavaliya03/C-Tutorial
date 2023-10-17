#include<stdio.h>
void main(){
    int n,rem=0,digit,count=0,a,temp=1;
    printf("Enter the number:");
    scanf("%d",&n);

    /*while(n>=0){
        digit=n%10;
        temp=temp*10+digit;
        n=n/10;
       // digit++;
    }*/

    while(n>0){
        rem=n%10;
        if(n!=0){
            count++;
        }
        printf("%d\n",rem);
        n=n/10;
    }
    printf("total digit:%d",count);
}