// WAP to find nPr using applications of pointer

#include <stdio.h>

void factorial(int x, int *f)
{
    *f = 1;
    for (int i = x; i >= 1; i--)
        *f = *f * i;
}
int main()
{
    int n;
    int r;
    printf("Enter n and r to find nPr \n");
    scanf("%d", &n);
    scanf("%d", &r);
    float result;
    int a, b;
    factorial(n, &a);
    factorial((n - r), &b);
    result = a / b;
    printf("\nThe permuation %dP%d is %.2f", n, r, result);
    return 0;
}
/*
Output
Enter n and r to find nPr
4
2
The permuation 4P2 is 12.00
*/