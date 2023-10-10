#include<stdio.h>

void main(){
    char character='a',capital='A';
    while((character>='a' && character<='z') || (capital>='A' && capital<='Z'))
    {
        printf("\n %c",capital);
        capital++;
        printf(" %c",character);
        character++;
       
    }
}