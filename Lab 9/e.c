#include<stdio.h>
int main(){
    int i,j,n;
    float fact=1,sum=1;

    printf("Enter the number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("(");
        fact=1;
        for(j=1;i>=j;j++){
            
        fact=(fact*j);
        
        }
        
        sum=sum+(1.0/fact);
        printf(")");
    
        
}
            printf("\nFinal value:%f",sum);
    return 0;
}

/*#include<stdio.h> 
 void main(){ 
         int i,j,n=10; 
         float val=1,div=1; 
         for(i=1;i<=n;i++){ 
       div=1; 
                 for(j=1;j<=i;j++){ 
                         div*=j; 
                 } 
                 val=val+(1.0/div); 
         } 
         printf("%f",val); 
 }*/