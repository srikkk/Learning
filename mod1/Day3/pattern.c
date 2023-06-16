#include <stdio.h>

void print_numbers(int num){
    for (int i=1;i<=num;i++){
        printf("%d",i);
    }
    for(int i=num;i>=1;i--){
        printf("%d",i);
    }
}

void print_pattern(int num){
    for (int i =num; i>=1;i--){
        print_numbers(i);
        
        printf("\n");
    }
    
}

int main() {
    int n = 5;
    print_pattern(n);
    return 0;
}
