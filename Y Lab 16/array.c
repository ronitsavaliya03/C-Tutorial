#include<stdio.h>
void array(int a[5]);
int main(){
    int n,a[5];
    //printf("value of n:");
    //scanf("%d",&n);
   
    array(a);
}
void array(int a[5]){
    int n,i;
   
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }
}