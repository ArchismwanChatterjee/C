// Write a C program to calculate factorial of a number using function call
// where the number should be passed to function as parameter to the function.

#include <stdio.h>
int fact();

int main()
{
    int num;
    printf("Enter the number whose factorial you want to calculate\n");
    scanf("%d", &num);
    if (num >= 0)
        printf("factorial of %d is %d", num, fact(num));
    else
        printf("factorial of negative number is not possible");
    return 0;
}
int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
// output : Enter the number whose factorial you want to calculate 5
// factorial of 5 is 120
