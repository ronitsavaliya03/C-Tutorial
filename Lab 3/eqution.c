#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    float delta,sdelta,D1,D2;

    printf("enter the num1:");
    scanf("%d",&a);
    printf("enter the num2:");
    scanf("%d",&b);
    printf("enter the num3:");
    scanf("%d",&c);
    
    delta=((b*b)-(4*a*c));
    printf("%f\n",delta);

    if(delta<0){
        printf("\nRoots are Imaginary");
    }
    else if(delta==0){
        printf("\nRoots are Equal and it is '%f'",(-1*b)-(2.0*a));
    }
    else if(delta>0){
        sdelta=sqrt(delta);

        D1=((-1*b)+(sdelta))/(2*a);
        printf("%f\n",D1);
        D2=((-1*b)-(sdelta))/(2*a);
        printf("%f\n",D2);
    }
    else{
        printf("not valid.!!!");
    }
    
    return 0;
}       
