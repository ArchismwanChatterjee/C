// Write a C Program to read full name of any person and find the length of the name
// without using any library function.

#include <stdio.h>
int main()
{
    char input;
    int len = 0;

    printf("Enter the name");
    
    input=getchar();
    while (input != '\n')
    {
        len++;
        input=getchar();
    }

    printf("Length is : %d", len);
}
/*
Enter the name
Sundar Pichai
Length is : 13
*/