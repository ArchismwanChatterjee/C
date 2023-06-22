/*
Using Array
Read n numbers and print
a)Max and min values
b)Reverse order
c)All even numbers*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int i, n, min, max, a[100];
    printf("Enter total number of elements : ");
    scanf("%d", &n);
    printf("Original Array is \n");
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        printf("\t %d", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        max = min = a[0];
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("\nMax and Min value are %d and %d\n", max, min);
    printf("The Array in Reverse Order is \n");
    for (i = n - 1; i >= 0; i--)
        printf("%d\t", a[i]);
    printf("\nThe even numbers are \n");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            printf("%d\t", a[i]);
    }
    return 0;
}
/*
OUTPUT
Enter total number of elements : 10
Original Array is
75      36      37      84      79      35      53      27      2       21
Max and Min value are 75 and 21
The Array in Reverse Order is
21      2       27      53      35      79      84      37      36      75
The even numbers are
36      84      2
*/