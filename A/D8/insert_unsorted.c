// Write a program in C to insert an element at a specified position in an array.

#include <stdio.h>

int main()
{
    int n, i, pos, ins; // ins inserts the element at pos position

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter elements in Array\n");
    for (i = 0; i < n; i++) // taking input
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the position in which you want to enter the element ");
    scanf("%d", &pos);

    if (pos < n)
    {
        printf("\nEnter the element which you want to enter ");
        scanf("%d", &ins);

        for (i = n - 1; i >= pos; i--) // shifting elements by one index to the right to create space for pos-th index
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = ins;
        printf("\nThe new array is\n");
        for (i = 0; i <= n; i++) // printing the new array
        {
            printf("%d\n", arr[i]);
        }
    }
    else
    {
        printf("Invalid position");
    }
    return 0;
}
/*
Enter the size of array: 4

Enter elements in Array
1
2
3
4

Enter the position in which you want to enter the element 2

Enter the element which you want to enter 4

The new array is
1
2
4
3
4
*/