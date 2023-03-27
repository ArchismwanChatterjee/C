// Write a program in C to read the numbers until -1 is encountered. Also count
// the negative, positive and zeros entered by the user.(USE EFFECTIVE
// LOOP STRUCTURE)

#include <stdio.h>
int main()
{
    // to store nnumber of positives,negatives and zeroes.
    int pos = 0, neg = 0, zero = 0;

    printf("Enter numbers. Enter -1 to terminate\n");
    int input; // stores input from the user.

    while (1 == 1)
    {
        scanf("%d", &input);

        if (input == -1)
        {
            printf("-1 Entered. Program terminates.\n");
            break;
        }

        if (input > 0)
        {
            printf("positive\n");
            pos++;
        }
        else if (input < 0)
        {
            printf("negative\n");
            neg++;
        }
        else
        {
            printf("zero\n");
            zero++;
        }
    }
    printf("Positives : %d\nNegatives : %d\nZeroes : %d", pos, neg, zero);

    return 0;
}
/*
Enter numbers. Enter -1 to terminate
1
positive
-5
negative
0
zero
-1
-1 Entered. Program terminates.
Positives : 1
Negatives : 1
Zeroes : 1
*/