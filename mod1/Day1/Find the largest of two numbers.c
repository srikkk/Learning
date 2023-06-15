// Find the largest of two numbers using if else 
#include <stdio.h>
int largest(int n1,int n2){
    int lrg;
    if (n1>n2){
        lrg = n1;
    }
    else{
        lrg = n2;
    }
    return lrg;
}

int main() {
    int n1,n2,lrg;
    printf("Enter the n1: ");
    scanf("%d",&n1);
    printf("Enter the n2: ");
    scanf("%d",&n2);
    lrg = largest(n1,n2);
    printf("The largest num is %d",lrg);

    return 0;
}

