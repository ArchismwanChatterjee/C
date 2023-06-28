## Loops
1. For approaching pattern problems always remember that the outermost loop (i) represents the rows iteration
2. While the inner loops(j,...) represents the space iteration and column iteration depending upon the requirements of the problem

## Postfix & Prefix Operators
1.Prefix means allocation in memory first and then access the value of the variable

2.Postfix means first access the value of the variable then allocation in memory

For example:

```C
int a=5;

int b= ++a + a++;

printf("%d",b);

The output is : 13

concept: 
prefix: first the value of a becomes 6 in the memory then 

postfix: uses 6 first and the value becomes 7 in the memory and uses 7 

thus 7+6=13
```

## Strings
In C, strings are nothing but a character array with null terminator('\0')

1. To input only word we use any one of the following 
```C
gets(string_name);
```
or 
```C
scanf("%s",string_name);
```
2. To input multiple words we use
```C
scanf("%[^\n]s", str);
```
![download](https://github.com/ArchismwanChatterjee/C/assets/115975340/4762c90d-8487-4edf-83c0-7c37d64e4621)

Basic visualisation of a string during memory allocation

## Pointers
``` C
int x,int *p,x=5;
p=&x;
printf("%x",p);
printf("%x",&p);
printf("\n\t Value stored in the variable pointed by p(i.e. x) is %d", *p);
*p=10;
printf("Now %d",*p);

Output:
61fefc
61fef8
Value stored in the variable pointed by p(i.e x) is 5
Now 10
```
Therefore, 

The variables where you can store addresses are called pointers(*p)

p stores the address of x

*p stores the content of x

We can even change the content of x without even using x i.e. by means of pointer(*p)

Every Array is a pointer by itself but the content of Array cannot be changed, also we can access each element with the help of pointers(*p)

Example:
```C
int a[]={1,2,3,4,5},i,n=5,*p;
p=a;
for(i=0;i<n;i++)
{
   printf("\n The value is %d",*(p++));
}
return 0;
Output:
The value is 1
The value is 2 
The value is 3 
The value is 4 
The value is 5 
```
