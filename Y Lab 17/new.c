#include<stdio.h>
struct time{
    int hours;
    int minutes;
    int seconds;
};
int main(){
    struct time t1,t2;
    int h,m,s;
    //1st time
    printf("--->Enter 1st time<---");
    printf("\n Enter Hours:");
    scanf("%d",&t1.hours);
    printf("\n Enter Minutes:");
    scanf("%d",&t1.minutes);
    printf("\n Enter Seconds:");
    scanf("%d",&t1.seconds);
    printf("\nThe Time is %d:%d:%d",t1.hours,t1.minutes,t1.seconds);
    //2nd time
    printf("\n--->Enter 2st time<---");
    printf("\n Enter Hours:");
    scanf("%d",&t2.hours);
    printf("\n Enter Minutes:");
    scanf("%d",&t2.minutes);
    printf("\n Enter Seconds:");
    scanf("%d",&t2.seconds);
    printf("\nThe Time is %d:%d:%d",t2.hours,t2.minutes,t2.seconds);

    h=t1.hours+t2.hours;
    m=t1.minutes+t2.minutes;
    s=t1.seconds+t2.seconds;

    printf("\nSum of the two time's is %d:%d:%d",h,m,s);

    
}