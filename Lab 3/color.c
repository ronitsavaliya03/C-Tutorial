#include<stdio.h>
void main(){
    int R,G,B;
    printf("enter your RED scale:");
    scanf("%d",&R);
    printf("enter your GREEN scale:");
    scanf("%d",&G);
    printf("enter your BLUE scale:");
    scanf("%d",&B);

    float C,M,Y,W,Black;
    R=R/255.0;
    G=G/255.0;
    B=B/255.0;

    if(R>G && R>B){
        W=R;
    }
    else if(G>R && G>B){
        W=G;
    }
    else if(B>R && B>G){
        W=B;
    }
    printf("White:%f\n",W);

    C=(W-R)/W;
    printf("Cyan:%f\n",C);

    M=(W-G)/W;
    printf("Magenta:%f\n",G);

    Y=(W-B)/W;
    printf("Yellow:%f\n",B);

    Black=1-W;
    printf("Black:%f\n",Black);
}