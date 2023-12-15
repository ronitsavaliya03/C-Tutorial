#include<stdio.h>

int main() {
    int n,j,k,i;
    printf("enter size of a array : ");
    scanf("%d",&n);
    
    int arr[n];
    for(j=0;j<n;j++){
        printf("enter array :");
        scanf("%d",&arr[j]);
        
    }
    int min=0,temp=0;
    min= arr[0];
    
    for(i=0;i<n;i++){
        for(k=i;k<n;k++){
            if(min>arr[k]){
                temp= arr[k];
                arr[k]=min;
                min=temp;
            }
        }
        arr[i]=min;
        min=arr[i+1];
    }
    for(i=0;i<n;i++){
        printf("%d < ",arr[i]);
        
    }
    
}

