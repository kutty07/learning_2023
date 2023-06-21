#include<stdio.h>

void diff(int arr[],int n){

    int oddsum=0,evensum=0;

    for(int i=0;i<n;i++){

        if((arr[i]%2)==0)
            evensum+=arr[i];

        else    
            oddsum+=arr[i];
    }

    printf("The difference between odd and even elements is : %d\n",oddsum-evensum);  

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
