#include<stdio.h>

void main(){
int x,y,i=1,multiply=1;
printf("Enter the base:");
scanf("%d",&x);
printf("Enter the power:");
scanf("%d",&y);

while(i<=y){
    multiply=multiply*x;
    i++;
}
printf("%d",multiply);
}
