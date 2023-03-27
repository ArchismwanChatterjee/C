// Write a program in C to calculate factorial of a given number using while loop.

#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter the number whose factorial is to be found\n");
    scanf("%d", &n);

    //handling cases when n is negative or 0
    if(n<0){
        printf("Factorial can't be found for negative numbers\n");
        return 0;
    }
    if(n==0){
        printf("FACTORIAL : 1");
        return 0;
    }

    while (n > 0)
    {
        fact = fact * n;
        n--;
    }
    printf("FACTORIAL : %d", fact);

    return 0;
}
/*
Enter the number whose factorial is to be found
6
FACTORIAL : 720
*/