#include<stdio.h>
int main(){
    int i,n,count=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++){
        printf("Enter the element of a[%d]:",i);
        scanf("%d",&a[i]);

        if(a[i]<0){
            count++;
        }
        
    }
    printf("\nnumber of negative elements:%d",count);

}