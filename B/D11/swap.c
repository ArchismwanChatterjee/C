// WAP to swap 2 numbers using pointers

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i, j;
    printf("Enter first number");
    scanf("%d", &i);
    printf("Enter second number");
    scanf("%d", &j);

    printf("The first number is %d and second is %d before swapping \n", i, j);
    swap(&i, &j);

    printf("The first number is %d and second is %d after swapping", i, j);
    return 0;
} /*
 OUTPUT
 Enter first number7
 Enter second number8
 The first number is 7 and second is 8 before swapping
 The first number is 8 and second is 7 after swapping
 */