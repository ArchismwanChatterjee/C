// Write a C Program for the recursive function to find the Fibonacci series
#include <stdio.h>

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++)
        printf("%d, ", fib(i));

    return 0;
}
/*
output:
Enter the number of terms: 4
Fibonacci Series: 0, 1, 1, 2,
*/