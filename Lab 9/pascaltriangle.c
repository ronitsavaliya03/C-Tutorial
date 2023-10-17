#include<stdio.h>

void main(){
    int i,j,n,a,x;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n-i;j++){
            printf(" ");

        }
        
        for(j=0;j<=i;j++){
            if(j==0 || i==0){
                a=1;
            }else{
                a=a*(i-j+1)/j;
            }
                printf("%2d",a);
        }
        printf("\n");
    }
}