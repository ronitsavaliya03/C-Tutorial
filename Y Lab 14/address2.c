#include<stdio.h>
int main(){
    int a,*p;
    float b,*q;
    char c,*r;
    double d,*s;

    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("Enter the value of c:");
    scanf(" %c",&c);
    printf("Enter the value of d:");
    scanf("%lf",&d);
 
    p=&a;
    q=&b;
    r=&c;
    s=&d;

    printf("\n\nvalue of a:%d\t\tvalue of *p:%d\t\taddress of a:%d",a,*p,p);
    printf("\nvalue of b:%f\tvalue of *q:%f\taddress of b:%d",b,*q,q);
    printf("\nvalue of c:%c\t\tvalue of *r:%c\t\taddress of c:%d",c,*r,r);
    printf("\nvalue of d:%lf\tvalue of *s:%lf\taddress of d:%d",d,*s,s);

   


}