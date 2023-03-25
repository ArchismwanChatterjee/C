// Write a program in C to find the greatest of three numbers using nested if structure and without
// using AND operator.
#include <stdio.h>
int main(){
	int a, b,c;
	printf("ENTER THREE NUMBERS\n");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b){
		if(a>c){
			printf("The Largest: %d",a);
		}else{
			printf("The Largest: %d",c);
		}
	}else{
		if(b>c){
			printf("The Largest: %d",b);
		}else{
			printf("The Largest: %d",c);
		}
	}
	return 0;
}
/*ENTER THREE NUMBERS
6 7 20
The Largest: 20*/