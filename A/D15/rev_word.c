// Write a C program to append a given string in the following format : given string:=
// “GOOD MORNING” and outcome is “GOOD MORNING MORNING GOOD”

#include <stdio.h>
/*
limits:
max 100 words,max 100 characters per word.
*/
int main()
{
    char str[100][100];

    printf("Enter the sentence:\n");

    // stores the input per character
    int input = getchar();
    // stores the word number
    int i = 0;
    // stores the character number in a word
    int j = 0;

    while (input != '\n')
    {
        if (input == ' ')
        {
            i++;
            j = 0;
            input = getchar();
            continue;
        }
        str[i][j++] = input;
        input = getchar();
    }

    printf("Required Output :\n");
    for (j = 0; j <= i; j++)
        printf("%s ", str[j]);
    for (j = i; j >= 0; j--)
        printf("%s ", str[j]);
}
/*
Enter the sentence:
Good Morning
Required Output :
Good Morning Morning Good
*/