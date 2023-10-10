#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            printf("%d,",i);
        }
        i++;
    }
    printf(" are factor of %d.",n);
    return 0;
}