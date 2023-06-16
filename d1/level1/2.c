#include<stdio.h>

int main(){
    int a;
    
    printf("Enter the student mark:\t");
    scanf("%d",&a);
    if(a>89)
        printf("Grade A\n");
    else if(a>74)
        printf("Grade B\n");
    else if(a>59)
        printf("Grade C\n");
    else if(a>49)
        printf("Grade D\n");
    else 
        printf("Grade E\n");

    return 0;
}