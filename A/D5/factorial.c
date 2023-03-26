// Write a program in C to calculate factorial of a given number(using for loop and while loop and do-while loop).

#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter the number whose factorial is to be found\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    // while (n > 0)
    // {
    //     fact = fact * n--;
    // }

    // do
    // {
    //     fact = fact * n;
    // } while (--n > 0);

    printf("FACTORIAL : %d", fact);

    return 0;
}
/*
Enter the number whose factorial is to be found
5
FACTORIAL : 120
*/