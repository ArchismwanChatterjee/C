// Write a program in C to find the greatest of three numbers using AND operator.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("%d is the greatest number\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the greatest number\n", b);
    } else {
        printf("%d is the greatest number\n", c);
    }

    return 0;
}
/*
Enter three numbers: 23 45 6
45 is the greatest number
*/
