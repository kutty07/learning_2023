#include <stdio.h>

void printPattern1(int n);
void printPattern2(int n);
void printPattern3(int n);


int main() {
    int n,s=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    while(n--){
        printPattern1(n);
        printPattern2(s);
        s+=2;
        printPattern3(n);
    }
    
    
    return 0;
}

void printPattern1(int n) {
    int i;
    for (i = 1; i <= n+1; i++) {
        printf("%d", i);
    }
}

void printPattern2(int s) {
    while(s){
        printf(" ");
        s--;
    }
}

void printPattern3(int n) {
    int i;
    for (i = n+1 ; i >= 1; i--) {
        printf("%d", i);
    }
    
    printf("\n");
}
