// complex numbers addition and product
#include <stdio.h>

struct Complex {
    double real;
    double imaginary;
};

struct Complex readComplex() {
    struct Complex num;
    printf("Enter the real part: ");
    scanf("%lf", &num.real);
    printf("Enter the imaginary part: ");
    scanf("%lf", &num.imaginary);
    return num;
}

void writeComplex(struct Complex num) {
    printf("Complex number: %.2lf + %.2lfi\n", num.real, num.imaginary);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    return sum;
}

struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex product;
    product.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    product.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);
    return product;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Read the first complex number:\n");
    num1 = readComplex();

    printf("\nRead the second complex number:\n");
    num2 = readComplex();

    printf("\n");

    printf("\nThe first complex number is:\n");
    writeComplex(num1);

    printf("The second complex number is:\n");
    writeComplex(num2);

    sum = addComplex(num1, num2);
    printf("\nThe sum of the two complex numbers is:\n");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("\nThe product of the two complex numbers is:\n");
    writeComplex(product);

    return 0;
}
