#include<stdio.h>
void main(){
    int i,j,n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        if(j==1 || j==5 || i==1 || i==5){
            printf(" *");
        }
        else{
            printf("  ");
        }  
    }
    printf("\n");
}
}