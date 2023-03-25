// Write a program in C to print all perfect numbers between 1 and N.

#include <stdio.h>

int main() {
   int n;

   printf("Enter a number: ");
   scanf("%d", &n);

   printf("Perfect numbers between 1 and %d are: ", n);
   for (int i = 1; i <= n; i++) {
      int sum = 0;
      for (int j = 1; j <= i/2; j++) {
         if (i % j == 0) {
            sum += j;
         }
      }
      if (sum == i) {
         printf("%d ", i);
      }
   }

   return 0;
}

/*
Enter a number: 50 
Perfect numbers between 1 and 50 are: 6 28 
*/