// A company decides to give bonus to all its employee on Diwali.
// A 5 % bonus on salary is  given to the male workers and 10 % bonus on salary to the female workers.
// Write a program to enter the salary and sex of the employee.
// If the salary of the employee is less than Rs.10,000 then the employee gets an extra 2% bonus on salary.
// Calculate the bonus that has to be given to the employee and display the final salary = (salary + bonus) that the employee will get.

#include <stdio.h>

int main()
{
    int salary,bonus;//bonus stores a percentage which will be calculated in the end.
    char sex;
    printf("Enter the salary and sex[M/F] of the employee\n");
    scanf("%d %c", &salary, &sex);

    if (sex == 'M')
        bonus = 5;
    else if(sex== 'F')
        bonus = 10;
    else{
        printf("Invalid input.");
        return 0;
    }

    if (salary < 10000)
        bonus += 2;

    float total=salary * (1 + bonus / 100.0);//total salary after adding bonus
    printf("BONUS : %d%%\nTOTAL SALARY : %.2f", bonus,total);

    return 0;
}
/*
Enter the salary and sex[M/F] of the employee
9000 M
BONUS : 7%
TOTAL SALARY : 9630.00

Enter the salary and sex[M/F] of the employee
12000 F
BONUS : 10%
TOTAL SALARY : 13200.00
*/