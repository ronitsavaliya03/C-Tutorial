#include<stdio.h>

int main(){
    int n,i=2,count=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    while(i>=n/2){
        if(n%i==0){
            count+=1;
            //break;
        }
        i++;
    }
    if(count==0){
        printf("%d is the prime number.",n);
    }
    else{
        printf("%d is not a prime number.",n);
    }
    return 0;
}