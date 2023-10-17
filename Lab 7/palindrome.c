#include<stdio.h>
void main(){
    int n,rem=0,digit,temp=0,a;
    printf("Enter the number:");
    scanf("%d",&n);
    a=n;


    while(n!=0){
        digit=n%10;
        temp=(temp*10)+digit;
        n=n/10;
    }

    if(a==temp){
        printf("Entered number is palindrome.");
    }
    else{
        printf("Entered number is not palindrome.");
    }

}