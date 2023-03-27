// Write a program in C which will calculate the following series:
// S = (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include <stdio.h>

int main() {
   int n;
   int sum = 0;

   printf("Enter the value of n: ");
   scanf("%d", &n);

   for (int i = 1; i <= n; i++) {
      int term_sum = 0;
      for (int j = 1; j <= i; j++) {
         term_sum += j;
      }
      sum += term_sum;
   }

   printf("The sum of the series is %d", sum);

   return 0;
}

/*
Enter the value of n: 4
The sum of the series is 20
*/