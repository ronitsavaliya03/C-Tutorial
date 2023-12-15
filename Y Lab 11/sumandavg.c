#include<stdio.h>
int main(){
    int i,n,sum=0,max=0,min;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the element of arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
     min=max;
    for(i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("sum of elements is %d",sum);
    printf("\naverage of elements is %d",sum/n);
    printf("\nmaximum value is %d",max);
    printf("\nminimum value is %d",min);

}