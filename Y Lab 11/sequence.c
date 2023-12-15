#include<stdio.h>

int main(){
    int i, n, j, count=0;
    scanf("%d", &n);
    
    int arr[n];
    for(i = 0;i < n; i++){
        printf("enter array value :");
        scanf("%d",&arr[i]);
    }
    
    for(i = 0;i < n; i++){
        if(arr[i]+1 != arr[i]){
            printf("\n%d", arr[i]);
        }
    }
}