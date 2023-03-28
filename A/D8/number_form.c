// Write a program in C to enter n number of digits and form a number using these digits.
// Example: 1 2 3 4 will generate 1234
//          0 0 3 4 will generate 34
//          1 2 0 0 will generate 1200
// we ignore negative numbers

#include <stdio.h>

int main()
{
    int n, i;
    long int num = 0;

    printf("Enter number of elements you want to enter\n");
    scanf("%d", &n);

    int arr[n];
    // taking input
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0 && arr[i] < 10)
        {
            num = num * 10 + arr[i];
        }
    }
    printf("Your number is :%ld", num);
    return 0;
}
/*
Enter number of elements you want to enter
3
Enter the elements
1
4
6
Your number is :146

Enter number of elements you want to enter
4
Enter the elements
0
0
4
7
Your number is :47

Enter number of elements you want to enter
6
Enter the elements
5
7
0
-1
4
7
Your number is :57047
*/