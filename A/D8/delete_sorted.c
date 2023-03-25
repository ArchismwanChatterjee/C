// Write a program in C to delete an element from a sorted array
#include <stdio.h>

int main()
{
    int n, i, pos, ins, check = 1; // ins deletes the element at pos position

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter elements in sorted Array\n");
    for (i = 0; i < n; i++) // taking input
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element which you want to delete ");
    scanf("%d", &ins);
    for (i = 0; i < n; i++) // finding position to insert the element
    {
        if (arr[i] == ins)
        {
            pos = i;
            break;
        }
        if (arr[i] != ins && i == n - 1) // checking if the number is in the array or not
        {
            check = 0;
        }
    }
    if (check)
    {
        for (i = pos; i < n; i++) // shifting elements by one index to the left to remove pos-th element
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
        printf("Element does not exist in the array");
    }
    return 0;
}
/*
Enter the size of array: 4

Enter elements in sorted Array
2
8
16
22

Enter the element which you want to delete 8

The new array is
2
16
22
*/