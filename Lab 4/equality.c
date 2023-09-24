#include<stdio.h>
int main(){
    int a,b;
    printf("enter the num a:");
    scanf("%d",&a);
    printf("enter the num b:");
    scanf("%d",&b);

    if(a^b){
        printf("not equal.!!");
    }
    else{
        printf("equal");
    }

    return 0;
}