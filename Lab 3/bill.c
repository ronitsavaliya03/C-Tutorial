#include<stdio.h>

void main(){
   float unit,total,temp;
   printf("enter the unit:");
   scanf("%f", &unit);

if(unit<=50){
    total=0.5*unit;
}
else if(unit<=150){
    total=(50*0.5)+(0.75*unit);
}
else if(unit<=250){
    total=(50*0.5)+(0.75*100)+(1.2*unit);
}
else if(unit>250){
    total=(50*0.5)+(0.75*100)+(1.2*100)+(1.5*unit);
}

temp=total*(0.2);
total=temp+total;

printf("%f", total);


}