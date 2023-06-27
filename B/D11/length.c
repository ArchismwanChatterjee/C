// WAP to find the length of a string using pointers

#include <stdio.h>

int length(char *s)
{
    int i = 0;
    while (s[i] != 0)
    {
        i++;
    }
    return i;
}

int main()
{
    char s1[25];
    int i;
    printf("Enter the string \n");
    gets(s1);

    i = length(s1);
    printf("The string length is %d", i);
    return 0;
}
/*
OUTPUT

Enter the string
Archismwan Chatterjee
The string length is 21

*/