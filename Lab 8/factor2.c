#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
         if(n%i==0){
            printf("%d,",i);
        }

    }

    printf(" are factor of %d.",n);
    return 0;
}