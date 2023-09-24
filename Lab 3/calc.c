#include<stdio.h>


int main(){
    int a,b;
    char c;
    printf("enter the process:");
    scanf("%c", &c);

    printf("enter the num1:");
    scanf("%d", &a);
    printf("enter the num2:");
    scanf("%d", &b);
    
    
    
    if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else if(c=='/'){
        printf("%d",a/b);
    }
     
    return 0;
}