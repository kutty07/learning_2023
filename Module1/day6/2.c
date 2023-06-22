#include <stdio.h>

struct Complex {
    double real;
    double imaginary;
};

typedef struct Complex Complex;

void readComplex(Complex *number) {
    printf("Enter the real part: ");
    scanf("%lf", &number->real);
    printf("Enter the imaginary part: ");
    scanf("%lf", &number->imaginary);
}


void writeComplex(Complex number) {
    printf("Complex number: %.2lf + %.2lfi\n", number.real, number.imaginary);
}

Complex addComplex(Complex number1, Complex number2) {
    Complex result;
    result.real = number1.real + number2.real;
    result.imaginary = number1.imaginary + number2.imaginary;
    return result;
}

Complex multiplyComplex(Complex number1, Complex number2) {
    Complex result;
    result.real = (number1.real * number2.real) - (number1.imaginary * number2.imaginary);
    result.imaginary = (number1.real * number2.imaginary) + (number1.imaginary * number2.real);
    return result;
}

int main() {
    Complex complex1, complex2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&complex1);

    printf("Enter the second complex number:\n");
    readComplex(&complex2);

    sum = addComplex(complex1, complex2);

    product = multiplyComplex(complex1, complex2);

    printf("\nFirst complex number:\n");
    writeComplex(complex1);

    printf("\nSecond complex number:\n");
    writeComplex(complex2);

    printf("\nSum of the complex numbers:\n");
    writeComplex(sum);

    printf("\nProduct of the complex numbers:\n");
    writeComplex(product);

    return 0;
}
