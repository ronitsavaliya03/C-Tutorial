#include<stdio.h>

void main(){
    float p,r,t;
    printf("enter the principle:");
    scanf("%f",&p);
    printf("enter the roi:");
    scanf("%f",&r);
    printf("enter the time:");
    scanf("%f",&t);
    printf("simple intrest: %f", (p*r*t)/100);
    return 0;
}