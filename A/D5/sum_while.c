// Write a program in C to display first n natural numbers and their sum using while loop

#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    printf("Enter how many natural numbers to display\n");
    scanf("%d", &n);
    printf("Natural Numbers:\n");
    while (i <= n)
    {
        printf("%d\n", i);
        sum = sum + i;
        i++;
    }
    printf("SUM : %d", sum);

    return 0;
}
/*
Enter how many natural numbers to display
5
Natural Numbers:
1
2
3
4
5
SUM : 15
*/