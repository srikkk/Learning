#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:  
            num |= 1;  // OR operation with 0000...0001 to set the bit
            break;
        case 2:  // Clear 31st bit
            num &= ~(1 << 31);  // AND operation with 0111...1111 to clear the bit
            break;
        case 3:  // Toggle 16th bit
            num ^= (1 << 16);  // XOR operation with 0000...0001 to toggle the bit
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }

    return num;
}

int main() {
    int num, oper_type;

    printf("Enter the integer: ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    int result = bit_operations(num, oper_type);
    printf("Result: %d\n", result);

    return 0;
}
