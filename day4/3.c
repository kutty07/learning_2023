#include<stdio.h>


int main(){

    int n;

    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    int a[n],b[n];

    printf("Enter the values: ");

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int j=0;

    for(int i=n-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }

    printf("The reversed array is: ");

    for(int i=0;i<n;i++)
        printf("%d ",b[i]);

    printf("\n");

    return 0;
}
