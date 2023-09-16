#include<stdio.h>
 
 int main(){
    int a,b,c;
    printf("enter the number:");
    scanf("%d", &a);

    b=(a<<1);
    printf("multiply by 2: %d",b);

    c=(a>>1);
    printf("\ndivide by 2: %d",c);
     
   return 0;
 }