// Write a C program to calculate factorial of n (n is user input).
#include <stdio.h>

int main()
{
    int i, n, f = 1;
    printf("Enter the number");
    scanf("\n %d", &n);
    for (i = n; i >= 1; i--)
        f *= i;
    printf("The factorial is %d", f);

    return 0;
}
/*
Enter the number
5
The factorial is 120
*/