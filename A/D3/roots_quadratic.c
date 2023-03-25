// Write a program in C to calculate the roots of a quadratic equation using if-else-if
// structure.
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, disc, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
disc = b*b - 4*a*c;
    if(disc > 0) {
        root1 = (-b + sqrt(disc)) / (2*a);
        root2 = (-b - sqrt(disc)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2lf and Root2 = %.2lf\n", root1, root2);
    }else if(disc == 0) {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and same.\n");
        printf("Root1 = Root2 = %.2lf\n", root1);
    }else {
        printf("Roots are imaginary.\n");
    }
    return 0;
}
/*Enter coefficients a, b, and c: 3 6 2
Roots are real and different.
Root1 = -0.42 and Root2 = -1.58*/
