// Write a program in C to generate sum of the following series
// (ii) S = 1-2+3-4+5-6+-----------------------+upto N terms

#include <stdio.h>
int main()
{
    int n, sum = 0,sign=1;//stores the sign of the current term. alternates each iteration between 1 and -1;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int x = i*sign;
        sum = sum + x;
        sign=-sign;//changing sign after each iteration.
    }
    printf("SUM : %d", sum);

    return 0;
}
/*
Enter the number of terms:
4
SUM : -2
*/