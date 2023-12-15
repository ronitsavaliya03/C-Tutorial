/*#include<stdio.h>
    int add(int a,int b);
   
    void main(){
        int ans;
        ans=add(5,6);
    }

    int add(int a,int b){
        int c;
        c=a+b;
        printf("%d",c);
        return c;
    }*/

#include<stdio.h>

int arr(int a[5]);

void main(){
    int a[5],i;

    int res=arr(a);
    printf("%d",res);
}

int arr(int a[5]){
    int ans=0,i;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        ans=ans+a[i];
    }
    return ans;
}