// Write a program in C to print all Armstrong numbers between 1 and N.
// Armstrong number is a number that is equal to the sum of cubes of its digits.
// Let's try to understand why 153 is an Armstrong number.

// 153 = (1*1*1)+(5*5*5)+(3*3*3)
// where:
// (1*1*1)=1
// (5*5*5)=125
// (3*3*3)=27
// So:
// 1+125+27=153
#include <stdio.h>
#include <math.h>
int main (){
    int num,temp, rem=1, power=0,n,sum=0;
    printf("enter upto which term we should print the amstrong number:\n");
    scanf("%d",&n);
    for(num=0;num<=n;num++){
        temp=num;
        sum=0;
        power=0;
        while (temp != 0) {
        temp/= 10;
        power++;
    }
    temp=num;
        while(temp!=0){
            rem=temp%10;
            sum=sum+pow(rem,power);
            temp=temp/10;
        }

        if(sum==num){
            printf("%d,",sum);
        }

    }
    return 0;
}
/*enter upto which term we should print thw amstrong number:
10000
0,1,2,3,4,5,6,7,8,9,370,371,407,1634,8208,9474,*/