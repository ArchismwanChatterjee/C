// Write a program to enter the marks of a student in four subjects. Then calculate the total,
// average and display the grades obtained by the students using (ii)  switch case.
#include <stdio.h>
int main(){
int marks1,marks2,marks3,marks4,sum;
float avg;
printf("Enter your mark\n");
scanf("%d %d %d %d",&marks1,&marks2,&marks3,&marks4);
 sum=marks1+marks2+marks3+marks4;
 avg=sum/4;
 printf ("Sum: %d,Average: %.2f\n",sum,avg);
 avg=avg/10;
switch ((int)avg)
{
case 9:
    printf("You got O grade");
    break;
case 8:
    printf("You got A grade");
    break;
case 7:
    printf("You got B grade");
    break;
case 6:
    printf("You got C grade");
    break;
case 5:
    printf("You got D grade");
    break;
default:
    printf("You Failed in this exam");
    break;
}
return 0;
}
/*Enter your mark
98 80 86 87
Sum: 351,Average: 87.00
You got A grade*/