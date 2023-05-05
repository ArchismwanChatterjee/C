// Write a C Program to compare two strings without using any library function.

#include <stdio.h>

int main()
{
    char a[100];
    char b[100];

    printf("Enter the first string\n");
    gets(a);

    printf("Enter the second string\n");
    gets(b);
    
    //flag variable
    int similar = 1;

    for (int i = 0; i < 100; i++)
    {
        if (a[i] != b[i])
        {
            similar = 0;
            break;
        }
        //is true if both strings have ended.
        if(a[i]=='\0')
            break;
    }

    if (similar == 1)
        printf("The strings are similar");
    else
        printf("The strings are not similar");
}

/*
Enter the first string
hello
Enter the second string
hello
The strings are similar
*/