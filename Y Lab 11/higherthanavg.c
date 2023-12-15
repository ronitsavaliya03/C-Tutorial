#include<stdio.h>
int main(){
    int i,n,sum=0,c;
    printf("Enter the value of an array:");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++){
        printf("Enter the value of an a[%d]:",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    c=sum/n;
    printf("avrage of array:%d",c);

    for(i=0;i<n;i++){
        if(c<a[i]){
            printf("\nnumber that is higher than avrage of array:%d",a[i]);
        }
    }
    return 0;
}