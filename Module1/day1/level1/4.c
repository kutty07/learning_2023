#include<stdio.h>
int main(){

    int op1,op2;
    char op;

    printf("Enter Number1: ");
    scanf("%d",&op1);

    printf("Enter the operator: ");
    scanf("\n%c",&op);

    printf("Enter Number2: ");
    scanf("%d",&op2);

    double res;

    switch(op)  
    {  
        case '+':  
            res = op1 + op2; // add two numbers  
            printf (" Addition of %d and %d is: %.2f\n", op1, op2, res);  
            break;  
          
        case '-':  
            res = op1 - op2; // subtract two numbers  
            printf (" Subtraction of %d and %d is: %.2f\n", op1, op2, res);  
            break;  
              
        case '*':  
            res = op1 * op2; // multiply two numbers  
            printf (" Multiplication of %d and %d is: %.2f\n", op1, op2, res);  
            break;            
          
        case '/':  
            if (op2 == 0)   // if n2 == 0, take another number  
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &op2);        
                }  
            res = op1 / op2; // divide two numbers  
            printf (" Division of %d and %d is: %.2f\n", op1, op2, res);  
            break;  
        default: 
            printf (" Something is wrong!! Please check the options\n ");               
    }  

    return 0;
}