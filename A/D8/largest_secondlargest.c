// Write a program in C to find largest and second largest elements from an array of n numbers
#include <stdio.h>
int main()
{
    int n, large1, large2, pos1 = 0, pos2 = 0, i;
    // large1 stores the largest number and large2 stores the 2nd largest number pos1 and pos2 stores their respective positions

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\n Enter elements in Array \n");
    for (i = 0; i < n; i++) // taking input
    {
        scanf("%d", &arr[i]);
    }

    large1 = large2 = arr[0]; // initializing both largest and 2nd largest numbers with the first element in array
    for (i = 1; i < n; i++)   // checking and finding the largest number
    {
        if (arr[i] > large1)
        {
            large1 = arr[i];
            pos1 = i;
        }
    }
    for (i = 1; i < n; i++) // checking and finding the 2nd largest number
    {
        if (arr[i] > large2 && arr[i] < large1)
        {
            large2 = arr[i];
            pos2 = i;
        }
    }
    // printing the largest and smallest numbers at their respective positions;

    printf("\nLargest number is %d at index %d", large1, pos1);
    printf("\n2nd Largest number is %d at index %d", large2, pos2);

    return 0;
}
// Enter the size of array : 5

//     Enter elements in Array
// 22
// -49
// 50
// 63
// 44
// Largest number is 63 at index 3
// 2nd Largest number is 50 at index 2