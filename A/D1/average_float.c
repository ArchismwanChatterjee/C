// Write a program in C to compute average of three floating point numbers, which may be positive or negative

#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter three numbers whose average is to be found.:\n");

    scanf("%f %f %f",&a,&b,&c);
    float average=(a+b+c)/3;

    printf("Average : %f",average);

    return 0;
}
/*
Enter three numbers whose average is to be found.:
3 6 10
Average : 6.333333
*/