/* Q)Read the basic salary of any person. Calculate the gross salary with the following values: DA (10%), HRA (20%).
Now if the salary is >300000, calculate tax @5%. If the salary is >500000, calculate tax @10%.

If Print the net salary along with tax.
*/
#include <stdio.h>
#include <stdio.h>

int main()
{
    float salary, tax;
    tax = 0;
    float basic, da, hra;
    printf("Enter the basic salary \n");
    scanf("%f,&basic");
    da = 0.1 * basic;
    hra = 0.2 * basic;
    salary = (basic + da + hra) * 12;
    if (salary > 300000)
    {
        tax = (0.05 * salary);
        salary = salary - tax;
        printf("The annual salary is %f and the tax is %f ", salary, tax);
    }
    else if (salary > 500000)
    {
        tax = (0.1 * salary);
        salary = salary - tax;
        printf("The annual salary is %f and the tax is %f ", salary, tax);
    }

    return 0;
}