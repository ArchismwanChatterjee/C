// Write a C program to create Simple Calculator using switch case.
// functions: [addition,subtraction,multiplication,division]

#include <stdio.h>

int main()
{
    int a, b;  // operands
    char c;    // operator
    float res; // result

    printf("Enter the two operands\n");
    scanf("%d %d", &a, &b);

    printf("Enter the operator [+,-,*,/]\n");
    scanf("\n%c", &c);

    switch (c)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = (float)(a) / (float)(b);
        break;
    default:
        printf("Incorrect input.");
        return 0;
    }

    printf("Result : %.2f", res);

    return 0;
}
/*
Enter the two operands
5 6
Enter the operator [+,-,*,/]
+
Result : 11.00

Enter the two operands
7 2
Enter the operator [+,-,*,/]
/
Result : 3.50
*/