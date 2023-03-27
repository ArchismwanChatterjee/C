// Write a program in C to multiply two integer numbers without using
// multiplication operator in an efficient way.

#include <stdio.h>
int main()
{
    int a, b, sum = 0;//stores the result of multiplication
    printf("Enter the numbers to be multiplied\n");
    scanf("%d %d", &a, &b);

    //making sure that b is the to minimize number of loops.
    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = 1; i <= b; i++)
    {
        sum = sum + a;
    }
    printf("%d * %d = %d", a, b, sum);

    return 0;
}
/*
Enter the numbers to be multiplied
9 15
15 * 9 = 135
*/