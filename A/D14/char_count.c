// Write a c program to count no. of characters in a string
#include <stdio.h>
#include <string.h>
int main(){
char s[100];
gets(s);
printf("size of the string is %d",strlen(s));
return 0;
}
/*hello
size of the string is 5*/