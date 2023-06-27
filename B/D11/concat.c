// WAP to concat two words using applications of pointers

#include <stdio.h>
#include <stdlib.h>
void concat(char *s, char *a)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }

    int j = 0;
    while (a[j] != '\0')
    {
        s[i] = a[j];
        i++;
        j++;
    }
    s[i] = '\0';
}

int main()
{
    char str[100], str1[50];

    gets(str);
    gets(str1);

    concat(str, str1);

    printf("The concatenated String is %s", str);

    return 0;
}
/*
OUTPUT
Archismwan
Chatterjee
The concatenated String is ArchismwanChatterjee
*/