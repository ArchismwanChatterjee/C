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

    // merging
    m = n1 + n2;
    int arr3[m];
    for (i = 0; i < n1; i++)
    {
        arr3[pos] = arr1[i];
        pos++;
    }
    for (i = 0; i < n2; i++)
    {
        arr3[pos] = arr2[i];
        pos++;
    }
    for (i = 0; i < m; i++)
    {
        for (j = i + 1; j < m; j++)
        {
            if (arr3[j] < arr3[i])
            {
                temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
    printf("sorted Merged array is\n");
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
sorted Merged array is
7 15 18 22 27 30 31 32 33 44 58*/