#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double result,i=1;
    printf("enter the num:");
    scanf("%d",&n);

    while(i<=n){
        result=sqrt(i);
        printf("square root of %lf is %lf\n",i,result);
        i++;
}
return 0;
}