// Write a program in C to merge two unsorted arrays.
// for example arr1[]=[40,50,70,30,20,10]
//             arr2[]=[2,8,6,7,9,1]
//             merged[]=[40,50,70,30,20,10,2,8,6,7,9,1]

#include <stdio.h>

int main()
{
    int n1, n2, m, pos = 0, i;

    // taking 1st array as input

    printf("Enter number of elements in first array\n");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements in first array\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    // taking 2nd array as input

    printf("Enter number of elements in second array\n");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements in second array\n");
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
    printf("Merged array is\n");
    for (i = 0; i < m; i++)
        printf("%d ", arr3[i]);

    return 0;
}
/*Enter number of elements in first array
4
Enter elements in first array
4
7
2
10
Enter number of elements in second array
5
Enter elements in second array
13
23
88
45
69
Merged array is
4 7 2 10 13 23 88 45 69*/