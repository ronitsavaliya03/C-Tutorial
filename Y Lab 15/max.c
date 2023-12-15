#include<stdio.h>
float arr(float,float,float);

void main(){
    float a,b,c;

    float res=arr(a,b,c);
    printf("%f",res);
}

float arr(float a,float b,float c){
    float max;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    
    return max;
}