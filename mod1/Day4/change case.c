
// Change case (upper to lower and lower to upper)

#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    printf("Enter the string size : ");
    int s;
    scanf("%d",&s);
    s = s + 1;
    printf("Enter the String : ");
    char str[s];
    
    for(int i =0; i<s ;i++)
    {
        scanf("%c",&str[i]);
    }
    for(int i =0; i<s ; i++)
    {
        if(isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        
        else if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
     for(int i =0; i < s  ;i++)
    {
        printf("%c",str[i]);
    }
    
   // printf("%s",*str);
    
    
    
    
    return 0;
}