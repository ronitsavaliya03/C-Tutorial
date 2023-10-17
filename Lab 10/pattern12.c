#include<stdio.h>

void main(){
    int i,j,n=5,alfa=65;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
    }
        for(j=1; j<=i; j++){
            if(i%2==0){
                printf(" %c",alfa);
                alfa++;
            }
            else{
                printf(" %d",j);
            }
    }
    printf("\n");
    }
}




/*#include<stdio.h>

void main(){
    int i,j,n=5,num=1;
    char alfa='A';
    for(i=1; i<=n;i++){
        for(j=1;j<=i;j++){
            num=1;
            alfa='A';
           if(i%2==0){
            printf(" %c",alfa);
            alfa++;
           }
           else{
            printf(" %d",num);
            num++;
           }
    }
    printf("\n");
    }
}*/
