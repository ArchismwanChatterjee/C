// Write a C program, in whch we enter a number as salary and calculate tax with the given
// following conditions.
// a) if income is less thn, 1,50,000 then no tax
// b) if taxable income is in the range 1,50,001-300,000 then charge 10% tax
// c) if taxable income is in the range 3,00,001-500,000 then charge 20% tax
// d) if taxable income is above 5,00,001 then charge 30% tax.

#include <stdio.h>

int main(){
    int sal,tax;//tax stores a percentage
    printf("Enter the salary\n");
    scanf("%d",&sal);

    if(sal<=150000)
        tax=0;
    else if(sal<=300000)
        tax=10;
    else if(sal<=500000)
        tax=20;
    else
        tax=30;

    printf("TAX : %d%%\nTAX AMOUNT : %.2f",tax,sal*(1+tax/100.0));

    return 0;
}
/*
Enter the salary
175000
TAX : 10%
TAX AMOUNT : 192500.00

Enter the salary
350000
TAX : 20%
TAX AMOUNT : 420000.00
*/