// Write a program in C to print largest of two numbers using ternary operator.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the two numbers.\n");
    scanf("%d %d", &a, &b);

    int max = a > b ? a : b;//maximum of a and b.
    printf("Maximum : %d", max);

    return 0;
}
/*
Enter the two numbers.
6 9
Maximum : 9
*/