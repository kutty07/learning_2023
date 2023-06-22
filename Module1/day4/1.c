#include<stdio.h>


int main(){

    int n,sum=0;
    float avg;

    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the values: ");

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int j=0;j<n;j++){
        sum=sum+arr[j];
    }

    avg=(float)sum/n;

    printf("The sum and average of 1D array is %d and %f respectively\n",sum, avg);
    return 0;
}