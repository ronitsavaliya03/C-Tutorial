#include<stdio.h>
int main(){
    int a,b,c,largest;
    printf("enter the num a:");
    scanf("%d",&a);
    printf("enter the num b:");
    scanf("%d",&b);  
    printf("enter the num c:");
    scanf("%d",&c);

    largest=a>b ? (a>c ? a : c) : (b>c ? b : c);
    printf("the largest number is %d",largest);
    return 0;
}