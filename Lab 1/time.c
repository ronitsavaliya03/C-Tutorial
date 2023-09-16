#include<stdio.h>

int main(){
    int tsecond,h,m,s;
    printf("enter tsecond:");
    scanf("%d",&tsecond);

    h=tsecond/3600;
    m=tsecond/60;
    m=m%60;
    s=tsecond%60;

    printf("%0.2d:%0.2d:%0.2d", h,m,s);

    return 0;
    
}