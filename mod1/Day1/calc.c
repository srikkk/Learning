#include <stdio.h>

int main() {
    float operand1, operand2;
    char operator;
    float result;


    printf("Enter Number1: ");
    scanf("%f", &operand1);

    
    printf("Enter any of the given operator (+, -, *, /): ");
    scanf(" %c", &operator);


    printf("Enter Number2: ");
    scanf("%f", &operand2);

    
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            
            if (operand2 == 0) {
                printf("Invalid Division.\n");
                return 1;  
            }
            result = operand1 / operand2;
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;  
    }

    
    printf("Result: %.2f\n", result);

    return 0;
}
