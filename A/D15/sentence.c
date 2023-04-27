// Write a C Program to read a sentence and Count the Number of words, Vowels,
// Consonants, digits and space.

#include <stdio.h>
#include <stdbool.h>

bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
    else
        return false;
}

bool isLetter(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    else
        return false;
}

bool isDigit(char c)
{
    if (c >= '0' && c <= '9')
        return true;
    else
        return false;
}

int main()
{
    int space = 0, vowels = 0, consonants = 0, digits = 0;
    printf("Enter the sentence:\n");
    char input=getchar();

    while (input!='\n')
    {
        if (input == ' ')
            space++;
        else if (isLetter(input))
            isVowel(input) ? vowels++ : consonants++;
        else if (isDigit(input))
            digits++;

        input=getchar();
    }

    printf("\n\nWords : %d\nVowels : %d\nConsonants : %d\nDigits : %d\nSpaces : %d", space + 1, vowels, consonants, digits, space);
}
/*
Enter the sentence:
I am a CSE student at NSEC since 1 year


Words : 10
Vowels : 12
Consonants : 17
Digits : 1
Spaces : 9
*/