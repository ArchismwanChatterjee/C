// Write a program in C to calculate the area of a CIRCLE using the formula given below:
//     Area = 3.14*radius*radius

#include <stdio.h>
int main()
{
    float radius;
    printf("Enter radius of the circle:\n");

    scanf("%f", &radius);
    float area = 3.14 * radius * radius;

    printf("Area of circle: %f", area);

    return 0;
}
/*
Enter radius of the circle:
4
Area of circle: 50.240002
*/