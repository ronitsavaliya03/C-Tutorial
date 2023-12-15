#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter length of array:");
    scanf("%d",&n);


    int a[n][n];
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("Enter value of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n--------\nTranspose\n--------\n");
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }


}