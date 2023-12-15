#include<stdio.h>
void main(){
    int i,n;
    printf("Enter the number of element of an array:");
    scanf("%d",&n);

    int *b[n],a[n];

    for(i=0;i<n;i++){
        printf("Enter the element of an array:");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        b[i]=&a[i];
        printf("\n%d",*b[i]);
    }

}