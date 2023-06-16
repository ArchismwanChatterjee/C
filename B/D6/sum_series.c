/* Q) Calculate the sum of the following series:
   sum = 1+2+2+3+3+3+4+4+4+4+.......+n (n is user input)*/

#include <stdio.h>

int main()
{
    int a, n, sum = 0;
    printf("Enter n : ");
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        sum += a * a;
    }
    printf("\n The Sum is %d", sum);
    return 0;
}
/*
OUTPUT
Enter n : 5
The Sum is 14
*/