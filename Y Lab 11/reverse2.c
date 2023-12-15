#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        printf("Enter the element of arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("value of arr[%d]:%d\n",arr[i]);
    }

    return 0;
}