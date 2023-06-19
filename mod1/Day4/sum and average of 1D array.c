// sum and average of 1D array
#include <stdio.h>

int main() {
    
    int arr[5] = {2,4,6,8,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for(int i =0 ; i<= size; i++){
        sum = sum + arr[i];
    }
    int avg = sum / size;
    printf("%d\n",sum);
    printf("%d",avg);
    

    return 0;
}