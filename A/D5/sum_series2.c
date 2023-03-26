// Write a program in C to generate sum of the following series
// (ii) S = 1-2+3-4+5-6+-----------------------+upto N terms

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int x = i * ((i % 2) * 2 - 1); // Ith term in the series.positive for odd term, negative for even term.
        sum = sum + x;
    }
    printf("SUM : %d", sum);

    return 0;
}
/*
Enter the number of terms:
4
SUM : -2
*/