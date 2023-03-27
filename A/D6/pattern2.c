// Write a program in C which will print the following pattern:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// n = 5

#include <stdio.h>

int main() {
   int rows, num = 1;

   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   for (int i = 1; i <= rows; i++) {
      for (int j = 1; j <= i; j++) {
         printf("%d ", num);
         num++;
      }
      printf("\n");
   }

   return 0;
}

/*
Enter the number of rows: 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/