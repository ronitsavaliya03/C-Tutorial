#include<stdio.h>

void main(){
   float BS,HRA,DA,TS;
   printf("enter the BASIC SALARY:");
   scanf("%f", &BS);

if(BS>=30000){
    TS=(BS*0.3)+(BS*0.95)+(BS);
    printf("%f", TS);
}
else if(BS>=20000){
    TS=(BS*0.25)+(BS*0.9)+(BS);
    printf("%f", TS);
}
else if(BS>=10000){
    TS=(BS*0.2)+(BS*0.8)+(BS);
    printf("%f", TS);
}
}