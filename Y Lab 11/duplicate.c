#include<stdio.h>
int main(){
    int i,j,n,count=0;
    printf("Enter how many element you want to in array:");
    scanf("%d",&n);

    int arr[n];
    for(i = 0; i < n; i++){
        printf("enter array value :");
        scanf("%d",&arr[i]);
    }
    
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
    }   
    printf("%d",count);  
}

