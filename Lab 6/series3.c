#include<stdio.h>
void main(){
    int n,i=1,odd=0,even=0,sum;
    printf("Enter the number:");
    scanf("%d",&n);

    while(n>=i){
        if(i%2==0){
            even+=i;
        }
        else if(i%2==1){
            odd+=i;
        }
       
        i++;
    }
    sum=odd-even;
    printf("%d\n",sum);
}