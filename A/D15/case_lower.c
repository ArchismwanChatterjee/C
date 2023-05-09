// Write a C Program to covert the given string “GOOD MORNING” to “good morning”.

#include <stdio.h>

int isUpperCase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

char toLowerCase(char c)
{
    return (c + ('a'-'A'));
}

int main()
{
    char str[100];

    // taking input for the string
    printf("Enter a string: \n");
    gets(str);

    int i = 0;
    
    while (str[i] != '\0')
    {
        if (isUpperCase(str[i]))
            str[i] = toLowerCase(str[i]);
        i++;
    }

    printf("The Required string is : \n%s", str);
}
/*
Enter a string:
Hello,Good MORNING
The Required string is :
hello,good morning
*/