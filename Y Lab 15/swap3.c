#include<stdio.h>
void swap(int,int);
void swap2(int,int);

void main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    swap2(a,b);
    swap(a,b);
}
void swap(int a,int b){
    int temp,*p,*q;

    p=&a;
    q=&b;

    temp=*p;
    *p=*q;
    *q=temp;

    printf("\n------by pointer------");
    printf("\nvalue of a:%d",a);
    printf("\nvalue of b:%d",b);

}
void swap2(int a,int b){
    int temp;

    temp=a;
    a=b;
    b=temp;

    printf("\n------simple------");
    printf("\nvalue of a:%d",a);
    printf("\nvalue of b:%d",b);
}