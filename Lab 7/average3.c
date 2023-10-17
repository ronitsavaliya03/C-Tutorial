#include<stdio.h>
void main(){
    int n,i=0,value,sum;
    printf("How many number You want to enter:");
    scanf("%d",&n);

    while(i<n){
        printf("Enter the num:",i);
        scanf("%d",&value);
        sum+=value;
        i++;
    }
    printf("sum of the value:%d",sum);
    printf("\naverage of the value:%f",(float)sum/n);

}

