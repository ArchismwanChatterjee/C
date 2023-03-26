// Write a C program to find LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, max, lcm;

    // Input two numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Find the LCM
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    // Print the LCM
    printf("LCM of %d and %d is %d", num1, num2, lcm);

    return 0;
}

/*
Enter two numbers: 6 9
LCM of 6 and 9 is 18
*/