#include<stdio.h>
void main(){
    int i,j,n,p=0,ne=0,z=0;
    printf("Enter length of array:");
    scanf("%d",&n);


    int a[n][n];
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("Enter value of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);

            if(a[i][j]>0){
                p++;
            }
            else if(a[i][j]<0){
                ne++;
            }
            else{
                z++;
            }
        }
    }

     for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("-------------------------------");
    printf("\nnumber of positive element: %d",p);
    printf("\nnumber of negative element: %d",ne);
    printf("\nnumber of zero element: %d",z);

        printf("\n");
    }
