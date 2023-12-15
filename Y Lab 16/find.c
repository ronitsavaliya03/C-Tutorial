#include<stdio.h>
void main(){
    char arr[40],ch;
    int i;
    printf("Enter the name:");
    scanf("%s",arr);
    printf("Enter the character:");
    scanf(" %c",&ch);
    printf("\n%s \n",arr);
    
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]==ch){
            printf("^");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}