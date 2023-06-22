// Check whether a 3digit random number is unique or not

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));

    int a, b, c;
    int n;

    a = rand() % 9 + 1;
    b = rand() % 10;

    if (a != b)
    {
        c = rand() % 10;
        n = a * 100 + b * 10 + c;
        if ((a != b) && (a != c) && (b != c))
        {
            printf("The number %d is unique", n);
        }
        else
            printf("NOT UNIQUE as the digits of %d are not unique", n);
    }
    else
        printf("Not unique : %d", (a * 10 + b));
    return 0;
}
/*
OUTPUT
The number 358 is unique
Not unique : 44
*/