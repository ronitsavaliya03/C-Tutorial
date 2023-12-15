#include<stdio.h>
void main(){
    char arr[40],rep,to;
    int i;
    printf("Enter the name:");
    scanf("%[^\n]s",arr);
    printf("Enter the character:");
    scanf(" %c",&rep);
    printf("Enter the character:");
    scanf(" %c",&to);
    
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]==rep){
           arr[i]=to;
        }
    }
       
    printf("\n %s\n",arr);

}