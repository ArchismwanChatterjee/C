// Convert Farenheit to Celcius
#include <stdio.h>

int main()
{
    float fahrenheit, celcius;

    printf("Enter temp in farenheit\n");
    scanf("%f", &fahrenheit);

    celcius = (5.0 / 9) * (fahrenheit - 32);

    printf("The temperature in celcius is %f °", celcius);

    return 0;
}
/*
Enter temp in farenheit
32
The temperature in celcius is 0.000000
*/