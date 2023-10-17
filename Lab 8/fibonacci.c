#include<stdio.h>
int main(){
    int n1=1,n2=1,n3,n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    
    
    for(i=1;i<=n;i++){
        printf("%d\n",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
       
    }
    return 0;

}