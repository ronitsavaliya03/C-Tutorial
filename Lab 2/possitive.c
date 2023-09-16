#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a>0){
        printf("number is positive");
    }
    else if(a<0){
        printf("number is negative");
    }
    else if(a==0){
        printf("ZERO");
    }
}