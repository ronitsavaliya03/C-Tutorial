#include<stdio.h>
int main()
{
    int i=1,n,fact=1;
    printf("Enter The Value of n : ");
    scanf("%d",&n);

    while(i<=n){
        fact=fact*i;
        i++;
    }
    
    printf("%d",fact);
    return 0;
}
