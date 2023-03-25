// Write a program that accepts a number from 1 to 10. Print whether the number is even or
// odd using switch case conduct.
#include <stdio.h>
int main(){
    int num;
    printf("ENTER A NUMBER IN BETWEEN 1 TO 10\n");
    scanf("%d",&num);
    switch(num%2){
        case 0: printf("The number %d is even",num);
        break;
        case 1: printf("The number %d is odd",num);
        break;
    }
    return 0;
}
/*ENTER A NUMBER IN BETWEEN 1 TO 10
4
The number 4 is even*/