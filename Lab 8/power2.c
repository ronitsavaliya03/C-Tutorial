#include<stdio.h>

void main(){
int x,y,i=1,multiply=1;
printf("Enter the base:");
scanf("%d",&x);
printf("Enter the power:");
scanf("%d",&y);

for(i=1;i<=y;i++){
    multiply=multiply*x;
}

printf("%d",multiply);

}