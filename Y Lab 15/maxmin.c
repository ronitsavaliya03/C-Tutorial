#include<stdio.h>
    void add(int a,int b);
   
    void main(){
        int ans,a,b;
        add(a,b);
    }
    
    void add(int a,int b){
        printf("Enter the value of a:");
        scanf("%d",&a);
        printf("Enter the value of b:");
        scanf("%d",&b);
        if(a>b){
            printf("max:%d",a);
            printf("\nmin:%d",b);
        }
        else{
            printf("max:%d",b);
            printf("\nmin:%d",a);
        }
    }