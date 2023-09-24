# include<stdio.h>

int main(){
    char a;
    printf("enter character:");
    scanf("%c", &a);

    if(a>='A' && a<='Z'){
        printf("character is upper case");
    }
    else if(a>='a' && a<='z'){
        printf("character is lower case");
    }
    else if(a>='0' && a<='9'){
        printf("character is digit");
    }
    else{
        printf("character is special character.!!");
    }

}