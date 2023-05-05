// Write a c program to count no. of characters in a string

#include <stdio.h>
#include <string.h>

int main()
{
    int len=0;
    char input;
    printf("Enter the string : \n");
    while (1)
    {
        scanf("%c", &input);
        if (input == '\n')
            break;
        len++;
    }
    printf("size of the string is %d", len);
    return 0;
}

/*
Enter the string : 
Hello there, I am Dad.
size of the string is 22
*/