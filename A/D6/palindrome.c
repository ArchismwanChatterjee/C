// Write a program in C to check whether a number is palindrome or not.

#include <stdio.h>

int main() {
   int n, reversed = 0, original;

   printf("Enter a number: ");
   scanf("%d", &n);

   original = n;

   while (n != 0) {
      int digit = n % 10;
      reversed = reversed * 10 + digit;
      n /= 10;
   }

   if (original == reversed) {
      printf("%d is a palindrome number", original);
   } else {
      printf("%d is not a palindrome number", original);
   }

   return 0;
}

/*
Enter a number: 1221
1221 is a palindrome number

Enter a number: 1234
1234 is not a palindrome number
*/