// Write a C Program to reverse a string without using any library function and check
// whether the given string is palindrome or not.

#include <stdio.h>
int len;

void reverse(char str[]){
    char temp;
    for(int i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
}

int isPalindrome(char str[]){
    for(int i=0;i<=len/2;i++){
        if(str[i]!=str[len-1-i])
            return 0;
    }
    return 1;
}

int main()
{
    char str[100];
    len = 0;

    printf("Enter a string: \n");
    gets(str);

    //to find the length of the string
    while (str[len] != '\0')
    {
        len++;
    }

    reverse(str);
    printf("Reversed String : %s\n",str);
    
    if(isPalindrome(str))
        printf("It is palindrome");
    else
        printf("It is not palindrome");
}
/*
Enter a string: 
racecar
Reversed String : racecar
It is palindrome
*/