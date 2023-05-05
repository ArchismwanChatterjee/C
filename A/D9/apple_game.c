//  Given a number of apples in sequence. Every apple is numbered with an integer.
//  Two players Alice and Bob are playing a game where Alice can remove any apple
//  from the list which are numbered multiples of 3.
//  Similarly, Bob can remove multiples of 5.
//  The player who can't remove any apple loses the game.
//  The task is to find the winner of the game if Alice starts first and both play optimally.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of apples\n");
    scanf("%d", &n);

    int threes = 0, fives = 0, fifs = 0;

    printf("Enter the numbers on the apples\n");

    int input;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        if (input % 15 == 0)
            fifs++;
        else if (input % 5 == 0)
            fives++;
        else if (input % 3 == 0)
            threes++;
    }

    threes = fifs / 2 + fifs % 2;
    fives = fifs / 2;

    if (threes > fives)
        printf("With Optimal play, Alice should win!");
    else
        printf("With Optimal play, Bob should win!");
}
/*
Enter the number of apples
4
Enter the numbers on the apples
3
5
3
5
With Optimal play, Bob should win!
*/