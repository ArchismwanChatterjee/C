/*  WAP to generate
    a) Generate 10 random numbers lesser than 100.
    b) Generate 10 random numbers in the range of 50 to 99. */

// a

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    printf("The random numbers are\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", (rand() % 100));
    }
    return 0;
}
/*
OUTPUT
The random numbers are
10
68
5
95
59
0
11
60
59
33
*/

// b

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    printf("The random numbers are\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", ((rand() % 50) + 50));
    }
    return 0;
}
/*
OUTPUT
The random numbers are
52
57
86
58
74
87
57
85
70
60
*/