// Write a program in C to read n numbers from the keyboard and find their
// sum and average. Also count the negative, positive and zeros entered by the
// user.(USE EFFECTIVE LOOP STRUCTURE).
#include <stdio.h>
int main()
{
    int n, input, pos = 0, neg = 0, zero = 0, sum = 0;
    float avg;
    printf("Enter how many numbers to read:\n");
    scanf("%d", &n);
    printf("Enter the numbers:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        sum += input;

        if (input > 0)
            pos++;
        else if (input < 0)
            neg++;
        else
            zero++;
    }
    avg = sum / (float)(n);//typecast n to float to prevent integer division

    printf("SUM : %d\nAVERAGE : %f\n", sum, avg);
    printf("Positives : %d\nNegatives : %d\nZeroes : %d", pos, neg, zero);

    return 0;
}
/*
Enter how many numbers to read:
5
Enter the numbers:
-1
0
5
-8
3
SUM : -1
AVERAGE : -0.200000
Positives : 2
Negatives : 2
Zeroes : 1
*/