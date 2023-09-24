#include<stdio.h>

int main(){
    char ch,ans;
    printf("enter any character:");
    scanf("%c",&ch);
    ans=(ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ? printf("It is an Alphabet.") :printf("It is not an Alphabet.");
    return 0;

}