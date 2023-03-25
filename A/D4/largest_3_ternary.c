// Write a program in C to print largest of three numbers using ternary operator.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three numbers.\n");
    scanf("%d %d %d", &a, &b, &c);

    int max = b>c?b:c;//finding maximum of b and c
    max=max>a?max:a;//maximum of previous max and a.

    printf("Maximum : %d", max);

    return 0;
}
/*
Enter the three numbers.
5 1 9
Maximum : 9
*/