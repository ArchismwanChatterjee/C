// Read full name of any person (say, Sagarika Sen) and perform the following:
// a) Greet the person with &quot;Hello&quot;. (i.e., Output is: Hello Sagarika Sen )
// b) Greet the person with &quot;Hello&quot; and her first name. (i.e., Output is: Hello Sagarika )
// c) Greet the person with &quot;Hello&quot; and her last name. (i.e., Output is: Hello Ms. Sen )
// Note : Here Hello will be stored in one string and person’s name will be stored in
//        another string.You may use
//        gets(str_name) to read a string having blank space.
//        Alternatively, you may use the following code to use scanf() for the same purpose.
//        scanf("%[^\n]s", str_name);
//        // str_name is the name of the character array

#include <stdio.h>
/*
limits:
max 100 words,max 100 characters per word.
*/
int main()
{
    char str[100][100];

    printf("Enter the name:\n");

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
    printf("Required Output :\n\n");

    printf("(i) Hello ");
    for (j = 0; j <= i; j++)
        printf("%s ", str[j]);

    printf("\n\n(ii) Hello %s", str[0]);

    printf("\n\n(iii) Hello Mr/Ms. %s", str[i]);
}

/*
Enter the name:
Sagarika Ram Sen
Required Output :

(i) Hello Sagarika Ram Sen 

(ii) Hello Sagarika

(iii) Hello Mr/Ms. Sen
*/