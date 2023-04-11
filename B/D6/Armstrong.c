// Q)  Find the Armstrong numbers between 1 to 500. E.g. :153 = 1^3+5^3+3^3 (for 3 digit numbers)

#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    for (i = 1; i <= 500; i++)
    {
        int a = i;
        int c = 0;
        while (a != 0)
        {
            int d = a % 10;
            c++; // count digits
            a = a / 10;
        }
        int t = i;
        double armstrong = 0;
        while (t != 0)
        {
            int b = t % 10; // extract digit
            armstrong = armstrong + pow(b, c);
            t = t / 10;
        }
        if ((int)armstrong == i)
            printf("%d is an armstrong number \n", (int)armstrong);
    }

    return 0;
}
/*
1 is an armstrong number
2 is an armstrong number
3 is an armstrong number
4 is an armstrong number
5 is an armstrong number
6 is an armstrong number
7 is an armstrong number
8 is an armstrong number
9 is an armstrong number
153 is an armstrong number
370 is an armstrong number
371 is an armstrong number
407 is an armstrong number
*/