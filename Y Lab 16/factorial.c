#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    printf("%d",fact(n));
}

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        int b;
        b=n*fact(n-1);
        return b;
    }
}