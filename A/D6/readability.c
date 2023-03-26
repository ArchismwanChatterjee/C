// Write a program to read N positive integer numbers; if any input is zero, program should take
// the input again but if any input is negative loop body should be terminated.

#include <stdio.h>

int main() {
   int n, num;

   printf("Enter the value of N: ");
   scanf("%d", &n);

   for (int i = 1; i <= n; i++) {
      printf("Enter a positive integer: ");
      scanf("%d", &num);

      while (num <= 0) {
         if (num == 0) {
            printf("Zero is not allowed. Please enter a positive integer: ");
         } else if (num < 0) {
            printf("Negative number detected. Loop terminated.\n");
            return 0;
         }
         scanf("%d", &num);
      }

      printf("You entered: %d\n", num);
   }

   return 0;
}


/*
Enter the value of N: 5
Enter a positive integer: 0
Zero is not allowed. Please enter a positive integer: 0
Zero is not allowed. Please enter a positive integer: 3
You entered: 3
Enter a positive integer: 75
You entered: 75
Enter a positive integer: -3
Negative number detected. Loop terminated.
*/