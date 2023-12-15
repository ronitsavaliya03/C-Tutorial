#include<stdio.h>
#include<math.h>
int main(){
    float avg=0, gm=0, hm=0, sum=0, prod=1, hmm=0;
    int i, n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    
    int arr[n];
    for(i = 0; i < n; i++){
        printf("enter array value :");
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
        prod = prod * arr[i];
        hmm = hmm + (float)1 / arr[i];
    }
       
    int size = sizeof(arr) / sizeof(arr[0]);

    avg = sum/(float)n;
    gm = pow(prod, (float)1 / n);
    hm = (float)size/sum;   
    
    printf("\naverage is %f", avg);
    printf("\ngeometric mean is %f", gm);
    printf("\nharmonic mean is %f", hm);    

    return 0;
}