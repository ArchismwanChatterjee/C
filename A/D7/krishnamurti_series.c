// Write a program in C to print all Krishnamurti/Strong numbers between 1 and N.
// A Krishnamurthy number is a number whose sum of the factorial of digits is equal to the number itself.
// Example :

// Input:
// N = 145
// Output:
// YES
// Explanation:
// 1! + 4! + 5! = 145 So, 145 is a
// Krishnamurthy Number and therefore
#include <stdio.h>

int main (){
    int num,temp, rem=1,n,sum=0,val,fac;
   printf("enter upto which term we should print the krishnamurthy number:\n");
   scanf("%d",&n);
    for(num=0;num<=n;num++){
        temp=num;
        sum=0;
        while(temp!=0){
            rem=temp%10;
            fac=rem;
            val=1;
            for(fac;fac>=1;fac--){
                val=val*fac;
            }
            sum=sum+val;         
            temp=temp/10;
        }

        if(sum==num){
            printf("%d,",sum);
        }

    }
    return 0;
}
/*enter upto which term we should print the krishnamurthy number:
100000
0,1,2,145,40585,*/