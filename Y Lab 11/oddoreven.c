#include<stdio.h>
int main(){
    int i,n,even=0,odd=0,zero=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the element of arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else if(arr[i]%2==1){
            odd++;
        }
        else{
            zero++;
        }
    }
    printf("total even number:%d",even);
    printf("\ntotal odd number:%d",odd);
    printf("\ntotal zero number:%d",zero);

}