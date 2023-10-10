#include<stdio.h>
int main(){

    int n;
    
    printf("Enter Number: ");
    scanf("%d",&n);

    while(n!=0){
        if(n>=1000){
            printf("M");
            n=n-1000;
        }
        else if(n>=900 && n<=1000){
            printf("CM");
            n=n-900;
        }
        else if(n>=500 && n<=900){
            printf("D");
            n=n-500;
        }
        else if(n>=400 && n<=500){
            printf("CD");
            n=n-400;
        }
        else if(n>=100 && n<=400){
            printf("C");
            n=n-100;
        }
        else if(n>=90 && n<=100){
            printf("XC");
            n=n-90;
        }
        else if(n>=50 && n<=90){
            printf("L");
            n=n-50;
        }
        else if(n>=40 && n<=50){
            printf("XL");
            n=n-40;
        }
        else if(n>=10 && n<=40){
            printf("X");
            n=n-10;
        }
        else if(n>=9 && n<=10){
            printf("IX");
            n=n-9;
        }
        else if(n>=5 && n<=9){
            printf("V");
            n=n-5;
        }
        else if(n>=4 && n<=5){
            printf("IV");
            n=n-4;
        }
        else if(n>=1 && n<=4){
            printf("I");
            n=n-1;
        }
    }
     return 0;
}
