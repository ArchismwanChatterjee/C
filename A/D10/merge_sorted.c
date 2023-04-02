// Write a program in C to merge two sorted arrays.
// for example arr1[]=[12,18,40,60]
//             arr2[]=[47,56,89,90]
//             merged[]=[12,18,40,47,56,60,89,90]
#include <stdio.h>

int main()
{
    int n1, n2, m, pos = 0, i, j, temp;

    // taking 1st array as input

    printf("Enter number of elements in first sorted array\n");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements in first sorted array\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    // taking 2nd array as input

    printf("Enter number of elements in second sorted array\n");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements in second sorted array\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    // merging[O(n) solution]
    m = n1 + n2;
    int arr3[m];
    i = 0;
    j = 0;
    int k = 0;

    while (i < n1 && j < n2) // always picking the lowest element from the front of both arrays till one of the arrays is empty.
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    // putting the remaining elements in the merged array if present.
    while (i < n1) // if first array has leftover elements
        arr3[k++] = arr1[i++];

    while (j < n2) // if second array has leftover elements.
        arr3[k++] = arr2[j++];

    printf("\nSorted Merged array is:\n");
    for (i = 0; i < m; i++)
        printf("%d ", arr3[i]);

    return 0;
}
/*Enter number of elements in first sorted array
7
Enter elements in first sorted array
7
15
18
22
30
31
32
Enter number of elements in second sorted array
4
Enter elements in second sorted array
27
33
44
58

Sorted Merged array is:
7 15 18 22 27 30 31 32 33 44 58
*/