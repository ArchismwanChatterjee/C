// Create a array of n elements and count the number of repeated numbers

#include <stdio.h>

int main()
{
    int a[100], n, i, j, s = 0, c = 0;
    printf("Enter total number of elements: ");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The Original Araay is \n");
    for (i = 0; i < n; i++)
        printf("%d\t", &a[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                c++;
                break;
            }
        }
    }
    printf("\nTotal repeated elements are %d", c);
    return 0;
}
/*
OUTPUT
Enter total number of elements: 5
Enter the elements
10
10
100
25
10
The original Array is
10  10  100  25  10
Total repeated elements are 3
*/