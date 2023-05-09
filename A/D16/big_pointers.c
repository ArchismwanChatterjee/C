// WRITE A PROGRAM TO FIND BIGGEST OF THREE NUMBERS USING POINTERS.
#include <stdio.h>

void biggestOfThree(int *a, int *b, int *c, int *result)
{
    *result = (*a > *b && *a > *c) ? *a : (*b > *c ? *b : *c);
}

int main()
{
    int a, b, c, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    biggestOfThree(&a, &b, &c, &result);

    printf("The biggest number is %d", result);

    return 0;
}
/*Output
Enter three numbers: 1 2 3
The biggest number is 3
*/