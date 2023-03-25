// Write a C program to find maximum of two numbers using switch case
// Without using any relational operator.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the two numbers\n");
    scanf("%d %d", &a, &b);
    int max;

    switch ((a - b) >> 31)//getting the most significant bit from the difference of a and b
    {
    case 0://if difference is positive(a is greater), msb is 0.
        max = a;
        break;

    case -1://if difference is negative(b is greater), msb is -1
        max = b;
        break;
    }
    printf("MAX : %d", max);

    return 0;
}
/*
Enter the two numbers
67 34
MAX : 67
*/