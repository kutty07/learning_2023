#include <stdio.h>

int countSetBits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {

    int n;
    printf("\nEnter no. of elements: ");
    scanf("%d",&n);

    unsigned int a[n] ;

    for(int i=0;i<n;i++)
        scanf("\n%u",&a[i]);

    
    int totalSetBits = 0;

    for (int i = 0; i < n; i++) {
        totalSetBits += countSetBits(a[i]);
    }

    printf("Total number of set bits: %d\n", totalSetBits);

    return 0;
}
