// S= 1.2.3+2.3.4+3.4.5+...........+..........upto n terms
#include <stdio.h>
int main(){
    int i,j,n,sum=0,prod;
printf("Enter the range: \n");
scanf("%d", &n);
for(i=1;i<=n;i++){
    prod=1;
for(j=i;j<=i+2;j++){
    prod=prod*j;
    }
    sum=sum+prod;
    }
printf("Sum of the series: %d",sum);
   return 0;
}
/*Enter the range: 
3
Sum of the series: 90Enter the range: 
3
Sum of the series: 90*/