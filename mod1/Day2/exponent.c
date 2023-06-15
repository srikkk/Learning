#include <stdio.h>

void Exponent(double x)
{
    unsigned long long *ptr = (unsigned long long *)&x;
    unsigned long long exponentMask = 0x7FF0000000000000ULL;
    unsigned long long exponent = (*ptr & exponentMask) >> 52;

    printf("Hexadecimal: 0x%llx\n", exponent);

    printf("Binary: 0b");
    for (int i = 11; i >= 0; i--)
    {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
}

int main()
{
    double x = 0.7;
    Exponent(x);
    return 0;
}
