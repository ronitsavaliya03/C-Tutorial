#include<stdio.h>
int main(){
    int a,*p,b,*q,temp;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    
    p=&a;
    q=&b;

    temp=*p;
    *p=*q;
    *q=temp;

    printf("value of a:%d\n",a);
    printf("value of b:%d",b);


}