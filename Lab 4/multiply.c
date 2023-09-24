#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the num a:");
    scanf("%d",&a);
    printf("enter the num b:");
    scanf("%d",&b);
    printf("enter the num c:");
    scanf("%d",&c);

    switch(a>b){
        case 1:printf("%d*%d=%d",a,c,a*c);
        break;
        case 0:printf("%d*%d=%d",b,c,b*c);
        break;
    }



}