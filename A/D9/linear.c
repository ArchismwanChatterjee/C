// Write a program in C to search an element using linear/sequential search.
// Elements are distinct and array is unsorted

#include <stdio.h>

int main()
{
    int n, pos = -1, key, i;

    printf("Enter number of elements you want to enter\n");
    scanf("%d", &n);

    int arr[n];
    // taking input
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number you want to search for: ");
    scanf("%d", &key);
    // searching for key value using linear search
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            pos = i;
            break;
        }
    }
    // providing checking conditions incase the element is not present in the array
    if (pos == -1)
        printf("\n Element is not present in array");
    else
        printf("\n %d is present in %d index of array", key, pos);
    return 0;
}
/*
Enter number of elements you want to enter
4
Enter the elements
33
44
87
23
Enter number you want to search for: 44

 44 is present in 1 index of array

 Enter number of elements you want to enter
4
Enter the elements
1
2
3
4
Enter number you want to search for: 5

 Element is not present in array
 */