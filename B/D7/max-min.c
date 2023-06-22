// Accept n numbers and print max,min elements
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int i, n, min, max, a[100];
    printf("Enter total number of elements");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        printf("\t %d", a[i]);
        max = min = a[0];
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("\nMax and Min value are %d and %d", max, min);
    return 0;
}
/*
OUTPUT
Enter total number of elements: 10
78      69      35      37      58      25      38      79      1       86
Max and Min value are 86 and 6
*/