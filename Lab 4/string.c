#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[100] ="4.0800" ; 

    printf("enter a string:");  
    scanf("%s",s); 
    int x = atoi(s);
    printf("converting strint to integer: %d\n",x);
    
    
    float y = atof(s);
    printf("converting strint to float: %f\n",y);
    return 0; 

}
