// Max and min of array
#include <stdio.h>

int min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {2, 6, 8, 97, 4, 87};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", min(arr, size));
    printf("%d", max(arr, size));

    return 0;
}