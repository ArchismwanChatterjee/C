// Write a program in C to check whether a year is leap year or not.
// [ A year is a leap year if the following conditions are satisfied:
// The year is multiple of 400.
// The year is multiple of 4 and not multiple of 100.].
// Example : 1700 - not a leap year
//           2000 - leap year
//           2024 - leap year

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}

/*
Enter a year: 1700
1700 is not a leap year

Enter a year: 2024
2024 is a leap year
*/