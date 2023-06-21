#include<stdio.h>

void diff(int arr[],int n){

    int oddsum=0,evensum=0;

    for(int i=0;i<n;i+=2)
        evensum+=arr[i];

    for(int j=1;j<n;j+=2)  
            oddsum+=arr[j];

    printf("The difference between odd and even indexed elements is : %d\n",oddsum-evensum);  

}

int main(){

    int n;

    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the values: ");

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    diff(a,n);

    return 0;
}
