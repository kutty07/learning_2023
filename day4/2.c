// Min & Max of 1D Array
#include<stdio.h>


int main(){

    int n;

    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the values: ");

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int min=arr[0],max=arr[0];

    for(int j=0;j<n;j++){
        if(arr[j]>max)
            max=arr[j];

        else if(arr[j]<min)
            min=arr[j];
    }



    printf("The min and max of 1D array is %d and %d respectively\n",min, max);
    return 0;
}
