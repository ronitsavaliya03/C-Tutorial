#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf("%d*%0.2d=%d\n",n,i,n*i);
    }
}