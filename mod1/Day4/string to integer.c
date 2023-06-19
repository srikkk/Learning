
// convert string to integer
#include <stdio.h>

int main()
{
    printf("Enter the size of string: ");
    int n;
    scanf("%d", &n);

    printf("Enter the string: ");
    char str[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &str[i]);
    }

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result = result * 10 + (str[i] - '0'); 
       
    }

    printf("%d", result);

    return 0;
}