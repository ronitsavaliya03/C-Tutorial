#include<stdio.h>

void main(){
    int tdays,y,w,d;
    printf("enter total days:");
    scanf("%d",&tdays);

    y=tdays/365;
    w=(tdays%365)/7;
    d=(tdays%365)%7;

    for (int i = 1; i<=y; i++)
{
    if((i%4==0 && i%100!=0)||i%400==0){
        d++;
    }
}

    /*if(y%4==0 && y%100!=0){
        printf("year is leap year");
    }
    else if(y%400==0){
        printf("year is leap year");
    }
    else{
        printf("year is not leap year");
    }*/
    

    printf("\n%0.2d:%0.2d:%0.2d", y,w,d);
}