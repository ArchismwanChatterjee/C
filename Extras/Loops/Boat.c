#include <stdio.h>

void drawStars(int n)
{
    while (n-- > 0)
    {
        printf("* ");
    }
}

void drawSpaces(int n)
{
    while (n-- > 0)
    {
        printf("  ");
    }
}

void drawTriangle(int h, int leftOffset)
{
    for (int i = 1; i <= h; i++)
    {
        drawSpaces(leftOffset);
        drawStars(i);
        printf("\n");
    }
}

void drawInverseTrapezium(int base, int height)
{
    int spaces = 0;
    while (height-- > 0 && base > 0)
    {
        drawSpaces(spaces++);
        drawStars(base);
        base -= 2;
        printf("\n");
    }
}

int main()
{
    drawTriangle(6, 3);
    drawInverseTrapezium(12, 4);
}
/*
      * 
      * * 
      * * * 
      * * * * 
      * * * * * 
      * * * * * * 
* * * * * * * * * * * * 
  * * * * * * * * * * 
    * * * * * * * * 
      * * * * * * 
 */