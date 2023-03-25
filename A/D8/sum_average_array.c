// Write a program in C to calculate sum and average of elements present in an array.

#include <stdio.h>

int main()
{
    int n, sum = 0, i;
    float average;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\n Enter elements in Array\n");
    for (i = 0; i < n; i++) // taking input
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) // calculating sum
    {
        sum += arr[i];
    }
    average = sum / n; // calculating average

    printf("\nSum: %d", sum);
    printf("\nAverage: %f", average);

    return 0;
}
// Enter the size of array : 4

// Enter elements in Array
// 1
// 2
// 3
// 4

// Sum : 10
// Average : 2.000000