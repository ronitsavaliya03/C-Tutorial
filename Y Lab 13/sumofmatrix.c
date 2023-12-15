#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter length of array:");
    scanf("%d",&n);


    int a[n][n];
    printf("Enter the element of matrix 1\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("Enter value of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int b[n][n];
    printf("Enter the element of matrix 2\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("Enter value of b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    //------------------------------------------------------------

printf("Matrix 1\n--------\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("--------\n");

printf("Matrix 2\n--------\n");    
     for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    //------------------------------------------------------------

    printf("--------\nAnswer\n");
    printf("--------\n");
    int c[n][n];

    
     for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d\t",c[i][j]=a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}