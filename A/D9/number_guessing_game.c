// Write a C program to implement the Number Guessing Game. In this game the
// computer has saved a four digit number. the player tries to guess the number in
// maximum 5 few attempts. Each time the player enters a guess, the computer
// tells him how many correct digits he/she has entered and in proper position.
// Once the player guesses the number, the game is over.
// As for example: if the original number is 4321 and player guesses 1304 then
// Result will be shown below the guess as,
// 1 3 0 4
//* _ x *   where * represents the number is present but not in that position,
//_ represents that it is present in correct position and x means it's not present.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int num[4], attempts = 5, guess[4];
    char result[4];

    // generating a random number.
    printf("Generating a Random Number!...\n");
    srand(time(0));
    int temp = rand();
    temp = ((temp >> 16) ^ temp) * 0x119de1f3;
    temp = ((temp >> 16) ^ temp) * 0x119de1f3;
    temp = (temp >> 16) ^ temp;
    temp = abs(temp);
    temp = temp % 8999 + 1000;
    printf("Random Number Genarated!...\n");
    printf("You have %d Attempts to find the number.\n", attempts);

    for (int i = 3; i >= 0; i--) // turning the number into an array.
    {
        num[i] = temp % 10;
        temp /= 10;
    }

    while (attempts-- > 0)
    {
        printf("\nEnter your guess[A 4 digit number]\n");
        scanf("%d", &temp);

        if (temp < 1000 || temp > 9999) // handling invalid input
        {
            printf("Invalid input, enter a 4 digit number\n");
            attempts++;
            continue;
        }

        for (int i = 3; i >= 0; i--) // turning guess into an array.
        {
            guess[i] = temp % 10;
            temp /= 10;
        }

        for (int i = 0; i < 4; i++) // naking result empty.
        {
            result[i] = 'x';
        }

        int correct = 0;
        for (int i = 0; i < 4; i++) // filling result
        {
            for (int j = 0; j < 4; j++)
            {
                if (guess[i] == num[j])
                {
                    if (i == j)
                    {
                        result[i] = '_';
                        correct++;
                        break;
                    }
                    else
                        result[i] = '*';
                }
            }
        }

        printf("Result:[x->not present , *->present , _->proper position]\n");
        printf("%d %d %d %d\n%c %c %c %c\n", guess[0], guess[1], guess[2], guess[3], result[0], result[1], result[2], result[3]);
        if (correct == 4)
        {
            printf("\nCongratulation! You guessed the number!");
            return 0;
        }
        else
            printf("\nIncorrect Guess...%d Attempts left!\n", attempts);
    }

    printf("Run out of attempts.. You Lost!. The number was : %d%d%d%d", num[0], num[1], num[2], num[3]);

    return 0;
}