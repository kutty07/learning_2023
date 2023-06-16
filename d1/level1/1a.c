#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first no.:\n");
    scanf("%d",&a);
    printf("Enter the second no.:\n");
    scanf("%d",&b);

    if(a>b)
        printf("The biggest no. is %d\n",a);
    else 
        printf("The biggest no. is %d\n",b);

    return 0;
}