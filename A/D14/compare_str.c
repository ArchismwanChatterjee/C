// Write a c program to find whether two strings are the same or not
#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100];
  printf("Enter the 1st string:\n");
  gets(str1);
  printf("Enter the 2nd string:\n");
  gets(str2);

  int result=0;
  result = strcmp(str1, str2);
  if(result==0){
    printf("the strings are same");
  }else{
    printf("the strings are different");
  }
  return 0;
}
/*Enter the 1st string:
hello
Enter the 2nd string:
hello1
the strings are different*/
