#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first no.:\t");
    scanf("%d",&a);
    printf("Enter the second no.:\t");
    scanf("%d",&b);

    (a>b)? printf("The biggest no. is %d\n",a) : printf("The biggest no. is %d\n",b);

    return 0;
}