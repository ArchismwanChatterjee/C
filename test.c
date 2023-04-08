#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int digit[4], guess[4], num, i, j, k, digit1[4], pos[4], possize = 0, right[4], rightsize;
    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        digit[i] = rand() % 9 + 0;
    }
    for (i = 0; i < 5; i++)
    {
        printf("\nENTER THE NUMBER:\n");
        scanf("%d", &num);
        j = 3;
        while (num != 0)
        {
            guess[j] = num % 10;
            num = num / 10;
            j--;
        }
        digit1[0] = digit[0];
        digit1[1] = digit[1];
        digit1[2] = digit[2];
        digit1[3] = digit[3];
        rightsize = 0;
        possize = 0;
        for (j = 0; j < 4; j++)
        {
            if (guess[j] == digit[j])
            {
                pos[possize] = digit[j];
                possize++;
            }
        }
        if (possize == 4)
        {
            printf("YOU HAVE GUESSED IT RIGHT,it was %d%d%d%d", digit[0], digit[1], digit[2], digit[3]);
            return 0;
        }
        else
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 4; k++)
                {
                    if (guess[j] == digit1[k] /*&& j==k*/)
                    {
                        right[rightsize] = digit1[k];
                        // pos[possize]=digit1[k];
                        digit1[k] = -1;
                        rightsize++;
                        // possize++;
                        break;
                    }
                }
            }

            printf("\n%d of the digits (", rightsize);

            for (j = 0; j < rightsize; j++)
            {
                printf("%d,", right[j]);
            }
            printf("\b) ");
            if (rightsize == 0)
            {
                printf("\b\b ");
            }
            printf("are correct and"); // one digit (3) is in proper position.")
            printf(" %d of the digits (", possize);
            for (j = 0; j < possize; j++)
            {
                printf("%d,", pos[j]);
            }
            printf("\b) ");
            if (possize == 0)
            {
                printf("\b\b ");
            }
            printf("is in proper position.\n");

            // printf("\n%d,%d,%d,%d\n%d,%d,%d,%d",digit1[0],digit1[1],digit1[2],digit1[3],guess[0],guess[1],guess[2],guess[3]);
        }
    }
    printf("the correct answer was:%d %d %d %d", digit[0], digit[1], digit[2], digit[3]);
    return 0;
}