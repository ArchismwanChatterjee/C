// Write a C Program to read full name of any person and Find the Frequency of
// Characters in the given name.

#include <stdio.h>
int main()
{
    // setting an array for frequency of all ascii characters and initializing all values to 0.
    int freq[128];
    char input;
    for (int i = 0; i < 128; i++)
        freq[i] = 0;

    // taking input for the name
    puts("Enter the name");
    input = getchar();
    while (input != '\n')
    {
        freq[input]++;
        input = getchar();
    }

    // printing frequency  characters
    puts("The required frequencies :\n");
    for (int i = 65; i < 91; i++)
    {
        if (freq[i] + freq[i + 32] != 0)
            printf("%c / %c : %d\n",i,i+32,freq[i]+freq[i+32]);
    }
}
/*
Enter the name
Steve Jobs
The required frequencies :

B / b : 1
E / e : 2
J / j : 1
O / o : 1
S / s : 2
T / t : 1
V / v : 1
*/