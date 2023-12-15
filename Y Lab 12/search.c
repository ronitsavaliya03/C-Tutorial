#include<stdio.h>
int main(){
    int i,n,count=0,s;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++){
        printf("Enter the element of a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to search:");
    scanf("%d",&s);

     for(i=0;i<n;i++){
        if(a[i]==s){
            printf("your element is in a[%d]\n",i);
        }
    }


        
    }
