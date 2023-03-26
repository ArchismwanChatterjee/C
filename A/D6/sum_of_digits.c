// Write a program in C to calculate the sum of digits of a number.

#include <stdio.h>

int main() {
   int num, sum = 0, rem;
   printf("Enter a number: ");
   scanf("%d", &num);

   while (num != 0) {
      rem = num % 10;
      sum += rem;
      num /= 10;
   }

   printf("The sum of digits of the number is %d", sum);
   return 0;
}

/*
Enter a number: 2345
The sum of digits of the number is 14
*/
