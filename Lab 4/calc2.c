#include<stdio.h>
int main(){
    int operators,a,b,sum;
    printf("enter the num a:");
    scanf("%d",&a);
    printf("enter the num b:");
    scanf("%d",&b);
    printf("enter 1 for addition\nenter 2 for subtract\nenter 3 for multiply\nenter 4 for divide\n");
    scanf("%d",&operators);

    switch(operators){
        case 1:{
            printf("%d+%d=%d",a,b,a+b);
            break;
        }
        case 2:{
            printf("%d-%d=%d",a,b,a-b);
            break;
        }
        case 3:{
            printf("%d*%d=%d",a,b,a*b);
            break;
        }
        case 4:{
            printf("%d/%d=%d",a,b,a/b);
            break;
        }
    }
    return 0;
}