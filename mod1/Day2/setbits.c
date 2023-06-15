#include <stdio.h>

int count_set_bits(unsigned int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int total_set_bits(unsigned int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += count_set_bits(arr[i]);
    }
    return total;
}

int main()
{
    unsigned int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = total_set_bits(arr, size);
    printf("Total set bits: %d\n", result);
    return 0;
}
