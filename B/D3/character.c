/* Q) 3. Read any character variable. If the input is a lower case character, print it's equivalent upper case character,using Ascii otherwise print the input.
Generate an error message if the user input is not a valid character data.*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character \n");
    scanf("%c", &ch);
    if ((int)ch >= 97 && (int)ch <= 121)
        printf("%c", ((int)(ch - 32)));
    else
        printf("%c", ch);

    return 0;
}
/*
Enter any character
t
T
*/