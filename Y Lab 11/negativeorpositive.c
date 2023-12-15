#include<stdio.h>
int main(){
    int i,n,neg=0,pos=0,zero=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the element of arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]<0){
            neg++;
        }
        else{
            zero++;
        }
    }
    printf("total positive number:%d",pos);
    printf("\ntotal negative number:%d",neg);
    printf("\ntotal zero number:%d",zero);
}