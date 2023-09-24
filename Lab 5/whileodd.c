#include<stdio.h>
int main(){
    int n,a=1;
    printf("enter the num:");
    scanf("%d",&n);

    while(a<=n){
        if(a%2==1){
        printf("%d\n",a);
        }
         a++;
    }

return 0;
}