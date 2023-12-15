#include<stdio.h>
void main(){
    FILE *fp;
    char ch;
    fp=fopen("me.txt","r");
    do{
        ch=getc(fp);
        putchar(ch);
    }
    while(ch != EOF);
    fclose(fp);
} 