// Write a c program to count no. of characters in a string

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Enter the string : ");
    gets(s);
    printf("\nsize of the string is %d",strlen(s));
    return 0;
}

/*
Enter the string : Hello there

size of the string is 11
*/