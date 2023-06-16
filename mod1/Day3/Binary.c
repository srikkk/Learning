// Print the binary format of number
#include <stdio.h>

void print_bits(int n){
    for (int i = 31 ; i >=0; i--){
        int bit = (n>>i) & 1;
        printf("%d",bit);
    }
    
}
int main() {
    unsigned int number;
    printf("Enter the number: ");
    scanf("%u",&number);
    
    printf("Bits for number are: ");
    print_bits(number);
    

    return 0;
}