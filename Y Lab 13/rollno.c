#include<stdio.h>
void main(){
    int i,j,n;
    //printf("Enter length of array:");
    //scanf("%d",&n);


    int a[4][5],b[4][5];
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("Enter roll no of student a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            printf("marks of a[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);

        }
    }
        printf("\n\nDetails of students is as follows\n");
        printf("RollNo\tMarks\n");
     for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%d\t",a[i][j]);
            printf("%d",b[i][j]);
            printf("\n");
        }
    
    }
    
}
/*#include <stdio.h>
void main()
{
    int rno[20], marks[20];
    int i, j;
        for (i = 0; i < 5; i++)
        {
            printf("Enter roll of student[%d]: ", i + 1);
            scanf("%d", &rno[i]);
            printf("Enter marks of student[%d]: ", i + 1);
            scanf("%d", &marks[i]);
        }
        printf("\n\nDetails of students is as follows\n");
        printf("RollNo\tMarks\n");
    for (i = 0; i < 5; i++)
    {
        printf("%3d\t%3d", rno[i], marks[i]);
        printf("\n");
    }
    printf("\n\n");
}*/