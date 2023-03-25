// Write a program in C to enter a character and If the input is a lower case character, print
// it's equivalent upper case character, otherwise print the input. Generate an error message
// if the user input is not a valid character data.
#include <stdio.h>
int main (){
printf("ENTER A CHARACTER:\n");
char x;
scanf("%c",&x);
if(x>='A' && x<='Z'){          
    printf("%c",x);
}else if(x>='a' && x<='z'){
    printf("%c",x-32);
}else{
    printf("ERROR");
}
return 0;
}
/*ENTER A CHARACTER:
r
R*/