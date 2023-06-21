#include<stdio.h>

void operation(int n,int t){

    if(t==1)
    {
        n = n | 1 << 1;
        printf("After setting 1st bit :%d\n",n);
    }

    else if(t==2)
    {
        n = n & ~(1 << 31);
        printf("After clearing 31st bit :%d\n",n);
    }

    else if(t==3)
    {
        n = n ^ 1 << 16;
        printf("After toggling 16th bit :%d\n",n);
    }
}

int main(){

    int num,type;

    printf("Enter the no.:");
    scanf("%d",&num);

    printf("Enter operation type:");
    scanf("%d",&type);

    operation(num,type);

    return 0;
}