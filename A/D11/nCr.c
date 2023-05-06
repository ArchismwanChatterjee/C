//  Write a program in C to calculate C(n, r) using function;
#include <stdio.h>
int fact();
int C();

int main()
{
    int n, r;
    printf("Enter the values of n and r\n");
    scanf("%d %d", &n, &r);
    if (n >= r)
        printf("%dC%d = %d", n, r, C(n, r));
    else
        printf("nCr is not possible");

    return 0;
}
int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
int C(int n, int r)
{
    return fact(n) / fact(r) * fact(n - r);
}
/*
Enter the values of n and r
7 5
7C5 = 84
*/