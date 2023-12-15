#include<stdio.h>
int main(){
    int a,*p,b,;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    
    p=&a;
    q=&b;

    printf("value of c: %d",(*p)+(*q));
}