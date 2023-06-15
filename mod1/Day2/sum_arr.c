// Sum of alternate numbers
#include <stdio.h>

int main()
{

    int sum = 0;
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= size; i += 2)
    {
        sum += arr[i];
    }
    printf("Total is %d", sum);
    return 0;
}