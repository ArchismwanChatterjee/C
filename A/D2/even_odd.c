// Write a program in C to check whether a given number is even or odd.
#include <stdio.h>
int main()
{
	int n;
	printf("\nENTER ANY NUMBER BETWEEN 1 TO 10\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1: 
			printf("ODD"); 
			break;
		case 2: 
			printf("EVEN");
		 	break;
		case 3: 
			printf("ODD"); 
			break;
		case 4: 
			printf("EVEN"); 
			break;
		case 5: 
			printf("ODD"); 
			break;
		case 6: 
			printf("EVEN"); 
			break;
		case 7: 
			printf("ODD"); 
			break;
		case 8: 
			printf("EVEN"); 
			break;
		case 9: 
			printf("ODD"); 
			break;
		case 10: 
			printf("EVEN"); 
			break;
		default: 
			printf("\nINVALID INPUT\n"); 
			break;
	}
	return 0;
}
/*
ENTER ANY NUMBER BETWEEN 1 TO 10
4
EVEN
*/