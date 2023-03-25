// Write a program in C to swap two integers
// 1.) using a third variable
#include <stdio.h>

int main()
{
    float a,b;
    printf("Enter two numbers to swap:\n");
    scanf("%f %f",&a,&b);

    float c;//third temporary variable to allow swapping
    //swapping using third variable
    c=a;
    a=b;
    b=c;

    printf("First Number : %f\n",a);
    printf("Second Number : %f\n",b);
}
/*
Enter two numbers to swap:
1 2
First Number : 2.000000
Second Number : 1.000000
*/