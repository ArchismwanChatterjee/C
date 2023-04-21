// Write a C Program for the recursive function to find the factorial of a number
#include <stdio.h>

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Negative integer is not allowed.\n");
    }
    else
    {
        printf("%d factorial = %d\n", n, fact(n));
    }

    return 0;
}
/*
output:
Enter a non-negative integer: 4
4 factorial = 24
*/