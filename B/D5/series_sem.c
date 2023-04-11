/* Q)Write a C program to calculate the sum of the following series:
    sum = 1-2+3-4+5-6+... n (n is user input).
*/

#include <stdio.h>

int main()
{
    int s = 0;
    int n;
    printf("Enter number of terms \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            s = s - i;
        else
            s = s + i;
        ;
    }
    printf("The sum is %d", s);
    return 0;
}
/*
Enter number of terms
3
The sum is 2
     
*/