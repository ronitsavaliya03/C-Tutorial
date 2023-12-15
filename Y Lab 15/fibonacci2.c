#include<stdio.h>
void fibbo(int);

void main(){
    int n;
    fibbo(n);
}

void fibbo(int n){
    int n1=1,n2=1,n3,i;
    printf("Enter the number:");
    scanf("%d",&n);
    
    
    for(i=1;i<=n;i++){
        printf("%d\n",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    
}
}