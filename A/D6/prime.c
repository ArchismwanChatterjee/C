// Write a program in C to determine whether a number is prime or not.

#include <stdio.h>

int main() {
   int n;
   int isPrime = 1;

   printf("Enter a number: ");
   scanf("%d", &n);

   if (n < 2) {
      isPrime = 0;
   } else {
      for (int i = 2; i <= n/2; i++) {
         if (n % i == 0) {
            isPrime = 0;
            break;
         }
      }
   }

   if (isPrime) {
      printf("%d is a prime number", n);
   } else {
      printf("%d is not a prime number", n);
   }

   return 0;
}

/*
Enter a number: 17
17 is a prime number

Enter a number: 35
35 is not a prime number
*/
