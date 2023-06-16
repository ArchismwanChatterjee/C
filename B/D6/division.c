// Q) Implement division (m/n) using subtraction where m and n are both user inputs and m > n.
#include <stdio.h>

int main()
{
    int c = 0, a, b;
    printf("Enter the numbers\n");
    scanf("%d,%d", &a, &b);
    while (a > b)
    {
        a = a - b;
        c++; // counter representing the quotient
    }
    printf("The quotient and the remainder are %d and %d", c, a);
    return 0;
}
/*
OUTPUT
Enter the number
5  2
The quotient and the remainder are 2 and 1
*/