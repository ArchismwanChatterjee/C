// Q)Write a C program to implement multiplication using addition in an efficient way.
#include <stdio.h>

int main()
{
    int a, b;
    int s = 0;
    printf("Enter any 2 numbers \n");
    scanf("%d", &a);
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
        s += a;
    printf("Result is : %d", s);
    return 0;
}
/*
Enter any 2 numbers
3
4
Result is : 12
*/
