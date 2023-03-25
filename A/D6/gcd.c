// Write a C program to find HCF (GCD) of two numbers.

#include <stdio.h>
int main()
{
    int a,b,hcf;
    printf("ENTER YOUR TWO NUMBERS : ");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a||i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    printf("THE GCD OF %d AND %d IS = %d",a,b,hcf);
    return 0;
}
/*
ENTER YOUR TWO NUMBERS : 6 9
THE GCD OF 6 AND 9 IS = 3
*/