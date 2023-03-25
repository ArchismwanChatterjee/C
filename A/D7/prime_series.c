// Write a program in C to print all prime numbers between 1 and N.
#include<stdio.h>
int main(){
   int i, num, n, count;
   printf("Enter the range: \n");
   scanf("%d", &n);
   printf("The prime numbers in between the range 1 to %d:\n",n);
   for(num = 1;num<=n;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1)
      printf("%d,",num);
   }
   return 0;
}
/*Enter the range: 
100
The prime numbers in between the range 1 to 100:
2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,*/