
/* Q) Write a program in C to calculate the area of a circle using the below formula [Area =3.14*radius*radius]
 */
#include <stdio.h>

int main()
{
    float area, radius; // variables to store area and radius
    printf("The radius of the circle is \n");
    scanf("%f", &radius);                                                 // accepting the radius from the user
    area = 3.14 * radius * radius;                                        // calculating the area of the circle
    printf("The area of the circle with radius %f  is %f", radius, area); // displaying the area of the circle
    return 0;
}
/* 
The radius of the circle is 
2
The area of the circle with radius 2.000000  is 12.560000
*/
