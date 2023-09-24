#include<stdio.h>

void main(){
    int x,y,z;
    
    printf("enter the num1:");
    scanf("%d",&x);
    printf("enter the num2:");
    scanf("%d",&y);
    printf("enter the num3:");
    scanf("%d",&z);
    
    if(x>y && y>z){
        printf("%d",y);
    }
    if(y>x && x>z){
        printf("%d",x);
    }
    if(x>z && z>y){
        printf("%d",z);
    }

}