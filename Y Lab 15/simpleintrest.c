#include<stdio.h>
float arr(float,float,float);

void main(){
    float a,b,c;

    float res=arr(a,b,c);
    printf("%f",res);
}

float arr(float a,float b,float c){
    printf("enter the principle:");
    scanf("%f",&a);
    printf("enter the roi:");
    scanf("%f",&b);
    printf("enter the time:");
    scanf("%f",&c);
    
    return ((a*b*c)/100);
}
