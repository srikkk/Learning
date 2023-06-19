// REVERSE OF AN ARRAY
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
    
    
    int temp;
    
    int j = s - 1;
    
    for(int i =0; i < (s/2) ;i++)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
    
    printf("The reversed array is as below \n");
    
    for(int i = 0; i<s ; i++)
    {
        printf("%d ", arr[i]); 
    }

    
    
    

    return 0;
}