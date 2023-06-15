#include <stdio.h>
#include <string.h>
// Function to swap two values of any data types
void swap(void *a, void *b, size_t size)
{
    char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main()
{
    int int1 = 5;
    int int2 = 10;
    printf("Before swapping :int1=%d,int2=%d\n", int1, int2);
    swap(&int1, &int2, sizeof(int));
    printf("After swapping : int1=%d,int2=%d\n", int1, int2);

    double double1 = 2.45, double2 = 3.677;
    printf("Before swapping : double1=%f,double2=%f\n", double1, double2);
    swap(&double1, &double2, sizeof(double));
    printf("After swapping : double1=%f,double2=%f\n", double1, double2);

    char char1 = 'A', char2 = 'B';
    printf("Before swapping: char1 = %c, char2 = %c\n", char1, char2);
    swap(&char1, &char2, sizeof(char));
    printf("After swapping: char1 = %c, char2 = %c\n", char1, char2);

    return 0;
}
