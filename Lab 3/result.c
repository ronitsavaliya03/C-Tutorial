#include<stdio.h>
#include<math.h>

int main(){
    float p,c,m,co,e,result;
    printf("physics:");
    scanf("%f",&p);
    printf("chemistry:");
    scanf("%f",&c);
    printf("mathematics:");
    scanf("%f",&m);
    printf("computer:");
    scanf("%f",&co);
    printf("english:");
    scanf("%f",&e);

    result=(p+c+m+co+e)/5;
    printf("%f",result);

    if(result<35){
        printf("\nFail.!!");
    }
    else if(result>=36 && result<=45){
        printf("\nPass class");
    }
    else if(result>=46 && result<=60){
        printf("\nSecond class");
    }
    else if(result>=61 && result<=70){
        printf("\nFirst class");
    }
    else if(result>=70 &&  result<=100){
        printf("\nDistinction");
    }
    else{
        printf("\nnot valid.!!");
    }








    
}