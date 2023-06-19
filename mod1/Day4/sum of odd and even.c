// sum of odd and even
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int s, *arr;
   
    printf("Enter the size of array : ");
    
    scanf("%d",&s);
    
    arr = (int*)malloc(s*sizeof(int));
    
    printf("Enter the elements of the array : ");
    
    for(int i=0;i<s;i++)
    {
        
     scanf("%d",&arr[i]);

    }
    
    
    int odd, even, diff;
    
    for(int i = 0 ; i<s ; i++)
    {
        if((arr[i] % 2) == 0)
        {
            even = even + arr[i];
        } else {
            odd = odd + arr[i];
        }
        
        
    }
    
    diff = even - odd;
    
    printf("The sum of Even elements : %d \n The sum of Odd elements : %d",even,odd); 
    printf("\nThe difference b/w sum of even and odd elements is %d",diff);
    
    
    

    return 0;
}