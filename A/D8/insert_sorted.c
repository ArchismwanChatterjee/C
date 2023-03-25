// Write a program in C to insert an element in a sorted array.

#include <stdio.h>

int main()
{
    int n, i, pos, ins; // ins inserts the element at pos position

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter elements in sorted Array\n");
    for (i = 0; i < n; i++) // taking input
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element which you want to insert ");
    scanf("%d", &ins);
    for (i = 0; i < n; i++) // finding position to insert the element
    {
        if (arr[i] > ins)
        {
            pos = i;
            break;
        }
        if (ins > arr[n - 1])
        {
            pos = n;
            break;
        }
    }
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

    return 0;
}
/*
Enter the size of array: 5

Enter elements in sorted Array
2
4
6
8
10

Enter the element which you want to insert 7

The new array is
2
4
6
7
8
10
*/