#include<stdio.h>

void main(){
    int i,j,n=5,a=0;
    for(i=1; i<=n;i++){
        for(j=1;j<=i;j++){
            a=a+1;
            printf(" %2d",a);
    }
    printf("\n");
    }
}