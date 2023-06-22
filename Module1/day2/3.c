#include<stdio.h>

int main(){

    int n;
    printf("Enter the total no. of elements:");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter the numbers:");

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    int res=0;

    for(int j=0;j<n;j+=2)
        res=res+arr[j];

    printf("%d\n",res);

    return 0;
}