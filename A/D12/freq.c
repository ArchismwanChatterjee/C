// Write a C Program to read an array and print frequency of every duplicate
// elements.
#include <stdio.h>

int main()
{
    int n, i, j, count;
    // input the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], freq[n];
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1; // initialize the freq array with -1
    }

    // Count the frequency of each element in the array
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0; // Mark the duplicate elements as 0
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = count; // Store the frequency of the element
        }
    }

    // Print the frequency of each duplicate element in the array
    printf("Frequency of duplicate elements:\n");
    for (i = 0; i < n; i++)
    {
        if (freq[i] > 1)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
// output : Enter the number of elements : 5
// Enter the elements :
// 1
// 2
// 3
// 3
// 2
// Frequency of duplicate elements :
// 2 occurs 2 times
// 3 occurs 2 times
