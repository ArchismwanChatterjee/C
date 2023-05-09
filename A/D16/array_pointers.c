// WRITE A PROGRAM TO READ AND DISPLAY AN ARRAY OF NUMBERS USING POINTERS.
#include <stdio.h>

int main()
{
    int numArr[10], i;
    int *ptr = numArr;

    printf("Enter 10 numbers: ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }

    printf("The numbers are: ");

    ptr = numArr;

    for (i = 0; i < 10; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}
/*Output
Enter 10 numbers: 1 2 3 4 5 6 7 8 9 10
The numbers are: 1 2 3 4 5 6 7 8 9 10 */