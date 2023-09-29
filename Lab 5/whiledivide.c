#include<stdio.h>
int main(){
    int n,a;
    printf("From:");
    scanf("%d",&a);
    printf("To:");
    scanf("%d",&n);
    
    while(a<=n){
        if(a%2==0){
        printf("%d\n",a);
        }
    a++;
    }

return 0;
}
