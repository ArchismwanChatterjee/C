// //Write a program in C to enter a character and then determine whether it is vowel or not using OR
// operator.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel\n", ch);
    } else {
        printf("%c is not a vowel\n", ch);
    }

    return 0;
}

/*
Enter a character: E
E is a vowel

Enter a character: k
k is not a vowel
*/