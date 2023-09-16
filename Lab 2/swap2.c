#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the a:");
    scanf("%d", &a);
    printf("enter the b:");
    scanf("%d", &b);
    
    c=a;
    a=b;
    b=c;

    printf("number a:%d", a);
    printf("\nnumber b:%d", b);
    return 0;
}