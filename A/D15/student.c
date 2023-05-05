// Write a program in C to read and print the names of n students of a class.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of students\n");
    scanf("%d", &n);
    char str[n][100];

    printf("Enter the name of the students\n");
    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);

    printf("Name of the students\n\n");

    for (int i = 0; i < n; i++)
        printf("%d. %s\n", i+1, str[i]);
}
/*
Enter the number of students
5
Enter the name of the students
karan
ankit
krishnava
archismswan
eshan
Name of the students

1. karan
2. ankit
3. krishnava
4. archismswan
5. eshan
*/