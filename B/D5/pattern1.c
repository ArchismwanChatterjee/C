// Q) Write a C program to print any triangle of your choice.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
/*
Enter number of rows
10
*
**
***
****
*****
******
*******
********
*********
**********
*/