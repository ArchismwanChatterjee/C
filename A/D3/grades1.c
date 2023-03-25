// Write a program to enter the marks of a student in four subjects. Then calculate the total,
// average and display the grades obtained by the students using (i) if-else-if structure
#include <stdio.h>
int main(){
int marks1,marks2,marks3,marks4,sum;
float avg;
printf("Enter your mark\n");
scanf("%d %d %d %d",&marks1,&marks2,&marks3,&marks4);
 sum=marks1+marks2+marks3+marks4;
 avg=sum/4;
printf ("Sum: %d,Average: %.2f\n",sum,avg);
    if(avg >= 90){
	    printf("You got O grade");
		}
	else if (avg >= 80){
	    printf("You got A grade");
		}
	else if ( avg >=70){ 
		printf("You got B grade");
		}
	else if ( avg >=60){
		printf("You got C grade");
		}
    else if ( avg >=50){
		printf("You got D grade");
		}
	else {
		printf("You Failed in this exam");
		}
return 0;
}
/*Enter your mark
98 80 86 87
Sum: 351,Average: 87.00
You got A grade*/