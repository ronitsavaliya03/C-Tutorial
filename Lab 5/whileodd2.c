#include<stdio.h>
int main(){
    int i=1,n,odd=0,even=0;
    
    while(i<=n){
        printf("enter the number:");
        scanf("%d",&n);

        if(i%2==0){
            printf("%d\n",n);
            even++;
        }
        else if(i%2==1){
            printf("%d\n",n);
            odd++;
        }
        i++;
        }

printf("\n Total even numbers:%d",even);
printf("\n Total odd numbers:%d",odd);
return 0;
}
