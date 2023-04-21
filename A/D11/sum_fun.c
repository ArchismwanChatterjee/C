// write a program to calculate the sum of two integers using function call where the number should be passed as parameter
// to function and thee sum should be returned to the main function to print the sum at main function
#include <stdio.h>
int sum(int a, int b);

int main()
{
    int a, b;
    printf("enter two numbers to add\n");
    scanf("%d %d", &a, &b);
    printf("sum of %d and %d is %d", a, b, sum(a, b));
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
// output : enter two numbers to add 3 4
//  sum of 3 and 4 is 7