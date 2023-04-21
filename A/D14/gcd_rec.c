// Write a C Program for the recursive function to  find the gcd of two numbers
#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0)
        printf("Error: Input must be positive integers.\n");
    else
        printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));

    return 0;
}
/*
output:
Enter two positive integers: 2 10
GCD(2, 10) = 2
*/