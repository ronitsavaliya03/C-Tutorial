#include<stdio.h>
int main(){
    int a,num;
    printf("enter the num a:");
    scanf("%d",&a);

    num=a%2==0?printf("even number"):printf("odd number");
    return 0;

}