// Write a program in C to print largest and smallest elements and their
// corresponding positions from an array of n numbers.

#include <stdio.h>

int main()
{
    int n, largest, smallest, posL = 0, posS = 0, i;
    // largest stores the largest number and smallest stores the smallest number posL and posS stores their respective positions

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\n Enter elements in Array \n");
    for (i = 0; i < n; i++) // taking input
    {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0]; // initializing both largest and smallest numbers with the first element in array
    for (i = 1; i < n; i++)      // checking and finding the largest and smallest numbers
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            posL = i;
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            posS = i;
        }
    }
    // printing the largest and smallest numbers at their respective positions;

    printf("\nLargest number is %d at index %d", largest, posL);
    printf("\nSmallest number is %d at index %d", smallest, posS);

    return 0;
}
// Enter the size of array : 4

// Enter elements in Array
// 1
// 6
// 8
// 4

// Largest number is 8 at index 2
// Smallest number is 1 at index 0