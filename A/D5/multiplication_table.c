//Write a program in C to display the multiplication table for a given integer

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number whose multiplication table is to be displayed\n");
    scanf("%d",&n);

    printf("Multiplication table of %d\n\n",n);

    for(int i=1;i<=10;i++)
        printf("%d * %d = %d\n",n,i,n*i);
}

/*
Enter the number whose multiplication table is to be displayed
9
Multiplication table of 9

9 * 1 = 9
9 * 2 = 18
9 * 3 = 27
9 * 4 = 36
9 * 5 = 45
9 * 6 = 54
9 * 7 = 63
9 * 8 = 72
9 * 9 = 81
9 * 10 = 90
*/