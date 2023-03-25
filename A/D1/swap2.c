// Write a program in C to swap two integer numbers
// 2.) without using a third variable
#include <stdio.h>

int main()
{
    float a,b;
    printf("Enter two numbers to swap:\n");
    scanf("%f %f",&a,&b);
    //swapping without using third variable
    a=a+b;
    b=a-b;
    a=a-b;

    printf("First Number : %f\n",a);
    printf("Second Number : %f\n",b);
}
/*
Enter two numbers to swap:
3 4
First Number : 4.000000
Second Number : 3.000000
*/