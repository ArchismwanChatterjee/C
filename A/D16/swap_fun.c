// WRITE A PROGRAM TO SWAP VALUES OF TWO VARIABLES USING FUNCTION.(CALL BY ADDRESS CONCEPT).

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d", num1, num2);

    return 0;
}
/*Outut
Enter two numbers: 4 7
Before swapping: num1 = 4, num2 = 7
After swapping: num1 = 7, num2 = 4
*/
