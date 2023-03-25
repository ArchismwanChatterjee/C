// Write a program in C to delete an element at a specified position in an array.
#include <stdio.h>

int main()
{
    int n, i, pos; // ins inserts the element at pos position

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter elements in Array\n");
    for (i = 0; i < n; i++) // taking input
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the position in which you want to delete the element ");
    scanf("%d", &pos);

    if (pos < n)
    {
        for (i = pos; i < n; i++) // shifting elements by one index to the left to create space for pos-th index
        {
            arr[i] = arr[i + 1];
        }
        printf("\nThe new array is\n");
        for (i = 0; i < n - 1; i++) // printing the new array
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
Enter the size of array: 5

Enter elements in Array
23
45
67
89
22

Enter the position in which you want to delete the element 3

The new array is
23
45
67
22
*/