// Write a program in C to generate sum of the following series
// (i) S = 1+3+5+7+---------------------------+upto N terms

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int x = i * 2 - 1; // Ith term in the series.
        sum = sum + x;
    }
    printf("SUM : %d", sum);

    return 0;
}
/*
Enter the number of terms:
4
SUM : 16
*/