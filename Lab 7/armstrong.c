//this program is not completed.!!
#include<stdio.h> 
#include<math.h> 
int main(){

    int n,rem,sum=0,temp,count=0;    
    printf("enter the number:");    
    scanf("%d",&n);    

    temp=n;
   
while(n>0){
        rem=n%10;
        if(n!=0){
            count++;
        }
        n=n/10;
    }

    printf("%d",count);
    
    while(n>0){
        int rem1=n%10;
        sum=sum+(pow(rem1,count));
        n=n/10;
    }
    
    /*while(n>0){    
        s=n%10;    
        sum=sum+(pow(s,count));    
        n=n/10;    
    }*/
        if(temp==sum){
            printf("Armstrong number.");    
        }
        else{    
            printf("Not Armstrong number.");
                
}   
return 0;

}
