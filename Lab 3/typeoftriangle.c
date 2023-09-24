#include<stdio.h>
#include<math.h>

int main(){
    int x,y,z;
    int max1,max2,max3;
    printf("enter the side1:");
    scanf("%d",&x);
    printf("enter the side2:");
    scanf("%d",&y);
    printf("enter the side3:");
    scanf("%d",&z);

    if(x==y && y==z && x==z){
       printf("Triangle is Equilateral triangle.");
   }
    else if((x*x)==(y*y)+(z*z)||(y*y)==(x*x)+(z*z)&&(z*z)||(y*y)+(x*x)){
      printf("Triangle is Right angle triangle.");
    }
    else if (x==y || y==z || z==x){
       printf("Triangle is Isosceles triangle.");
   }
    else if(x!=y && x!=z && y!=z){
      printf("Triangle is Scalene triangle.\n");
   }

}