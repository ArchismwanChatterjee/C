/* Q) Write a program in C to swap two integer numbers

(i) using a third variable

(ii) without using a third variable.
*/
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("The numbers are\n");
    scanf("%d", &a);
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("The numbers after swapping are %d  %d ", a, b);
    return 0;
}
/*
The numbers are
23
45
The numbers after swapping are 45  23
*/