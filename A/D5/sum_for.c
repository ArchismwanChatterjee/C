// Write a program in C to display first n natural numbers and their sum using for loop
#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter how many natural numbers to display\n");
    scanf("%d",&n);
    printf("Natural Numbers:\n");

    for(int i=1;i<=n;i++){
        printf("%d\n",i);
        sum+=i;
    }
    printf("SUM : %d",sum);

    return 0;
}
/*
Enter how many natural numbers to display
5
Natural Numbers:
1
2
3
4
5
SUM : 15
*/