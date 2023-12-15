#include<stdio.h>
#include<string.h>
void stringfun(int n);

void main(){
    int n;
    printf("Enter the value of n(1to7):");
    scanf("%d",&n);
    
    stringfun(n);
}
void stringfun(int n){
    char s1[100],s2[100];
    printf("Enter the string1:");
    scanf("%s",&s1);
    printf("Enter the string2:");
    scanf("%s",&s2);

    if(n==1){
        printf("String lenght:%d %d",strlen(s1),strlen(s2));
    } 
    if(n==2){
        printf("String compare:%s",strcmp(s1,s2));
    }
    if(n==3){
        printf("String copy:%s",strcpy(s1,s2));//strcpy();
    }
    if(n==4){
        printf("String cat:%s",strcat(s1,s2));//strcat();
    }
    if(n==5){
        printf("String reverse:%s",strrev(s1));//strrev();
    }
    if(n==6){
        printf("String lowercase:%s",strlwr(s1));//strlwr();
    }
    if(n==7){
        printf("String uppercase:%s",strupr(s1));//strupr();
    }
}


