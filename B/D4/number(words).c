// Q)Read any 2 digit positive number and print it in words

#include <stdio.h>

int main()
{
    int a, b, n;
    printf("Enter a number \n");
    scanf("%d", &n);
    if (10 <= n && n < 100)
    {
        if (10 <= n && n <= 19)
        {
            switch (n)
            {
            case 10:
                printf("TEN");
                break;
            case 11:
                printf("ELEVEN");
                break;
            case 12:
                printf("TWELVE");
                break;
            case 13:
                printf("THIRTEEN");
                break;
            case 14:
                printf("FORTEEN");
                break;
            case 15:
                printf("FIFTEEN");
                break;
            case 16:
                printf("SIXTEEN");
                break;
            case 17:
                printf("SEVENTEEN");
                break;
            case 18:
                printf("EIGHTEEN");
                break;
            case 19:
                printf("NINETEEN");
                break;
            }
        }
        else
        {

            a = n % 10;
            b = n / 10;
            switch (b)
            {
            case 2:
                printf("TWENTY  ");
                break;
            case 3:
                printf("THIRTY  ");
                break;
            case 4:
                printf("FORTY  ");
                break;
            case 5:
                printf("FIFTY  ");
                break;
            case 6:
                printf("SIXTY  ");
                break;
            case 7:
                printf("SEVENTY  ");
                break;
            case 8:
                printf("EIGHTTY  ");
                break;
            case 9:
                printf("NINETY  ");
                break;
            }
            switch (a)
            {
            case 1:
                printf("ONE  ");
                break;
            case 2:
                printf("TWO  ");
                break;
            case 3:
                printf("THREE  ");
                break;
            case 4:
                printf("FOUR  ");
                break;
            case 5:
                printf("FIVE  ");
                break;
            case 6:
                printf("SIX  ");
                break;
            case 7:
                printf("SEVEN  ");
                break;
            case 8:
                printf("EIGHT  ");
                break;
            case 9:
                printf("NINE  ");
                break;
            }
        }
    }

    else
    {
        printf("Wrong Input");
    }
    return 0;
}
/*
Enter a number
56
FIFTY  SIX
*/