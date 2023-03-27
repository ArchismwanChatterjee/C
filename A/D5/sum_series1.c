// Write a program in C to generate sum of the following series
// (i) S = 1+3+5+7+---------------------------+upto N terms

#include <stdio.h>
int main()
{
    int n, sum = 0,nTerm;//stores the term at nTH position.
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    nTerm=n*2-1;

    for (int i = 1; i <= nTerm; i+=2)
    {
        sum = sum + i;
    }
    printf("SUM : %d", sum);

    return 0;
}
/*
Enter the number of terms:
4
SUM : 16
*/