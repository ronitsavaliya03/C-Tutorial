#include<stdio.h>
int main(){
    int i,j,n,sum=0,sum2=0;

    printf("Enter the number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("(");
        for(j=1;i>=j;j++){
            sum=sum+j;
            printf("%d",j);
            printf("+");
        }
        printf(")+");
        sum2=sum+i;
            //printf("%d+",sum2);
    }
            printf("\nFinal value:%d",sum);
    return 0;
}