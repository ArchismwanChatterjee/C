/* Q). Find the roots of the following equation : ax^2 +bx+c = 0.
 */
#include <stdio.h>
#include <math.h>
int main()
{
    float x1, x2;
    float a, b, c;
    printf("Enter the values of a,b,c respectively \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("\n The equation is %dx^2+%dx+%d", (int)a, (int)b, (int)c);
    if (((b * b) >= 4 * a * c) && (a != 0))
    {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
        x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
        printf("\n The roots are %f and %f", x1, x2);
    }
    else
        printf("\n a cannot be zero or the roots are complex");
    return 0;
}
/*
Enter the values of a,b,c respectively
1
2
1

 The equation is 1x^2+2x+1
 The roots are -1.000000 and -1.000000
*/