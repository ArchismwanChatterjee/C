// Q)Write a program to find the largest of three numbers.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 numbers one by one \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if ((a > b && b > c) || (a > c && c > b))
        printf("Max is %d", a);
    else if ((b > a && a > c) || (b > c && c > a))
        printf("Max is %d", b);
    else
        printf("Max is %d", c);
    return 0;
}
/*
Enter 3 numbers one by one
45
56
27
Max is 56
*/