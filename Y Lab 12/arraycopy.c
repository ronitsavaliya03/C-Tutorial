#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int a[n],b[n];

    for(i=0;i<n;i++){
        printf("Enter the element of a[%d]:",i);
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++){
        b[i]=a[i];
        printf("\nvalue of element of b[%d]:%d",i,b[i]);
    }
return 0;
    
}