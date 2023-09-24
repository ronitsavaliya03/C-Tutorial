#include<stdio.h>

int main(){
    int i=1,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);

    while(i<=10){
            printf("square of %d is:%d\n",i,i*i);
            
            sum=sum+(i*i);

            i++;
    }
    
    printf("%d",sum);
return 0;
}