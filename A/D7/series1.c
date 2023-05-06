// S = 1+2+2+3+3+3+4+4+4+4+..........+n
#include <stdio.h>
int main()
{
    int i, j, n, sum = 0, sum1 = 0;
    printf("Enter the range: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum1 = 0;
        for (j = 1; j <= i; j++)
        {
            sum1 = sum1 + i;
        }
        sum = sum + sum1;
    }
    printf("Sum of the series: %d", sum);
    return 0;
}
/*Enter the range:
4
Sum of the series: 30*/