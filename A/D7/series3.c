// S= 1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... till N terms
#include <stdio.h>
int main(){
    int i,n;
    float sum;
printf("Enter the range: \n");
scanf("%d", &n);
for(i=1;i<=n-1;i++){
    sum=1.0/((float)2*i+1);
}
printf("Sum of the series: %f",sum+1.0);
   return 0;
}
/*Enter the range: 
4
Sum of the series: 1.142857*/