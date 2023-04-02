
// Write a C program to implement the Number Guessing Game. In this game the
// computer has saved a four digit number. the player tries to guess the number in
// maximum 5 few attempts. Each time the player enters a guess, the computer
// tells him how many correct digits he/she has entered and in proper position.
// Once the player guesses the number, the game is over.
// As for example: if the original number is 4321 and player guesses 1304 then
// computer will answer three digits(1,3,4) are correct and one digit (3) is in
// proper position.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int num[4], attempts = 5, guess[4];
    char result[4];
    int correct, inPlace;

    // generating a random number.
    printf("Generating a Random Number!...\n");
    srand(time(0));
    int temp = rand();
    temp = abs(temp);
    temp = temp % 9000 + 1000;
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

        //making result empty
        result[0] = 'x';
        result[1] = 'x';
        result[2] = 'x';
        result[3] = 'x';

        correct = 0;
        inPlace = 0;
        for (int i = 0; i < 4; i++) // filling result
        {
            for (int j = 0; j < 4; j++)
            {
                if (guess[i] == num[j])
                {
                    if (i == j)
                    {
                        result[i] = '_';
                        inPlace++;
                        break;
                    }
                    else{
                        if(result[i]!='*')
                            correct++;
                        result[i] = '*';
                    }
                }
            }
        }

        printf("\n%d numbers are correct and %d numbers are in correct position\n",correct,inPlace);
        printf("Result:[x->not present , *->present , _->proper position]\n");
        printf("%d %d %d %d\n%c %c %c %c\n", guess[0], guess[1], guess[2], guess[3], result[0], result[1], result[2], result[3]);
        if (inPlace == 4)
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

/*
Generating a Random Number!...
Random Number Genarated!...
You have 5 Attempts to find the number.

Enter your guess[A 4 digit number]
1234

0 numbers are correct and 1 numbers are in correct position
Result:[x->not present , *->present , _->proper position]
1 2 3 4
_ x x x

Incorrect Guess...4 Attempts left!

Enter your guess[A 4 digit number]
4567

1 numbers are correct and 0 numbers are in correct position
Result:[x->not present , *->present , _->proper position]
4 5 6 7
x x x *

Incorrect Guess...3 Attempts left!

Enter your guess[A 4 digit number]
7890

1 numbers are correct and 1 numbers are in correct position
Result:[x->not present , *->present , _->proper position]
7 8 9 0
* x _ x

Incorrect Guess...2 Attempts left!

Enter your guess[A 4 digit number]
1791

1 numbers are correct and 4 numbers are in correct position
Result:[x->not present , *->present , _->proper position]
1 7 9 1
_ _ _ _

Congratulation! You guessed the number!
*/