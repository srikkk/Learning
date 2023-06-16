#include <stdio.h>

int find_largest_number(int number) {
    int largest = -1;  
    char number_str[5];
    sprintf(number_str, "%d", number);
    
    
    for (int i = 0; i < 4; i++) {
        char new_number_str[4];
        int idx = 0;
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                new_number_str[idx] = number_str[j];
                idx++;
            }
        }
        
        int new_number = atoi(new_number_str);
        
        if (new_number > largest) {
            largest = new_number;
        }
    }
    
    return largest;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    
    int largest_number = find_largest_number(number);
    printf("The largest number by deleting a single digit from %d is: %d\n", number, largest_number);
    
    return 0;
}
