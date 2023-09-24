#include<stdio.h>
int main(){
    int n,a=1;
    printf("enter the num1:");
    scanf("%d",&n);
    

    while(a<=n){
        if(a%2==0){
        printf("%d\n",a);
        }
    a++;
    }

return 0;
}