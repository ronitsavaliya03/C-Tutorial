#include<stdio.h>
void main(){
    int h[5],w[5],i, hc=0,wc=0,person=0;
    for(i = 0;i < 5;i++){
        printf("Enter Height and Weight of person %d (like H W ). : ",i + 1);
        scanf("%d %d",&h[i],&w[i]);

        if(h[i] > 170){
            hc++;
        }
        if(w[i] < 50){ 
            wc++;
        }
    }
        for(i = 0; i < 5; i++){
        if(h[i]>170 && w[i]<50){
            person++;
        }
    }
    printf("%d person has height is greater then 170.\n",hc);
    printf("%d person has weight is less then 50.\n",wc);
    printf("\nperson having height greater than 170 and weight less than 50 are %d", person);
}



