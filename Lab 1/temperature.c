#include<stdio.h>

int main(){
    int f;
    printf("enter the number:");
    scanf("%d", &f);
    printf("answer: %d",(((f-32)*5)/9));
    return 0;
}