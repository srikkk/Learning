// compute seconds
#include <stdio.h>
#include<string.h>

int main()
{
    int n=8;
    printf("Enter the time as 'HH:MM:SS' format : ");
    char str[8];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &str[i]);
    }
    char* token;
    char* dlm = ":";
    token = strtok(str,dlm);
    char *tokens[3];
    int numtok = 0;
    while( token != NULL ) {
        
     tokens[numtok] = token; 
     numtok++;    
     token = strtok(NULL, dlm);
   }
    
   
   
   int hour = atoi(tokens[0]);
   int minute = atoi(tokens[1]);
   int second = atoi(tokens[2]);
    
   int res = hour*3600 + minute*60 +second;
   
   printf("the total seconds is %d",res);

    return 0;
}