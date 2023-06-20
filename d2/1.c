#include <stdio.h>

void printExponent(double x) {
    unsigned long long* ptr = (unsigned long long*) &x;  // Pointer to treat x as unsigned long long
    
    unsigned long long exponentBits = (*ptr >> 52) & 0x7FF;  // Extract exponent bits
    
    // Print exponent in hexadecimal format
    printf("Exponent in hex: 0x%llx\n", exponentBits);
    
    // Print exponent in binary format
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%llu", (exponentBits >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x;

    printf("Enter the no: ");
    scanf("\n%lf",&x);

    printExponent(x);
    
    return 0;
}
