// Write a program in C which will calculate the following series:
// S = 1! + 2! + 3! + 4! + 5! + ... + n!

#include <stdio.h>

int main() {
   int n;
   int sum = 0;
   int fact = 1;

   printf("Enter the value of n: ");
   scanf("%d", &n);

   for (int i = 1; i <= n; i++) {
      fact *= i;
      sum += fact;
   }

   printf("The sum of the series is %d", sum);

   return 0;
}


/*
Enter the value of n: 3
The sum of the series is 9
*/