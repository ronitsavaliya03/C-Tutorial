#include <stdio.h>
int main()
{
    int n, i=2 ,flag=0;
    printf("Enter value of n: ");
    scanf("%d", &n);

    while(i<=n/2){
        if(n%i==0){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0){
        printf("%d is the prime number.",n);
    }
    else{
        printf("%d is not a prime number.",n);
    }
    return 0;
    
}
