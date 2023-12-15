#include<stdio.h>
int main(){
    int a,*p;
    printf("Enter the value of a:");
    scanf("%d",&a);
    p=&a;
    printf("value of a:%d\tvalue of *p:%d\taddress of a:%d",a,*p,p);
}