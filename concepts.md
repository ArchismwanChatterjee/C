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

