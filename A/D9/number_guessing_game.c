// Write a C program to implement the Number Guessing Game. In this game the
// computer has saved a four digit number. the player tries to guess the number in
// maximum 5 few attempts. Each time the player enters a guess, the computer
// tells him how many correct digits he/she has entered and in proper position.
// Once the player guesses the number, the game is over.
// As for example: if the original number is 4321 and player guesses 1304 then
// computer will answer three digits(1,3,4) are correct and one digit (3) is in
// proper position.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (){
    int digit[4],guess[4],num,flag,i,j,k,digit1[4],pos[4],possize=0,right[4],rightsize;
    srand(time(NULL));
    
    digit[0]=digit[i]=rand() % 9 + 1;
    digit[1]=digit[i]=rand() % 9 + 0;
    digit[2]=digit[i]=rand() % 9 + 0;
    digit[3]=digit[i]=rand() % 9 + 0;
    
    for(i=0;i<5;i++){
               flag=0;
        while(flag == 0){
        printf("\nENTER THE NUMBER:\n");
        scanf("%d",&num);
        if(num<=1000 || num>=9999){
            printf("Invalid input enter 4 digit number");
            continue;
        }else{
            flag=1;
        }
        }
        j=3;
        while(num!=0){
            guess[j]=num%10;
            num=num/10;
            j--;
        }
        digit1[0]=digit[0];
        digit1[1]=digit[1];
        digit1[2]=digit[2];
        digit1[3]=digit[3];
        rightsize=0;
        possize=0;
        for(j=0;j<4;j++){
            if(guess[j]==digit[j]){
                pos[possize]=digit[j];
                possize++;
            }
        }
if(possize==4){
            printf("YOU HAVE GUESSED IT RIGHT,it was %d %d %d %d",digit[0],digit[1],digit[2],digit[3]);
            return 0;
        }else{
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
               if(guess[j]==digit1[k] /*&& j==k*/){
                       right[rightsize]=digit1[k];
                       //pos[possize]=digit1[k];
                       digit1[k]=-1;
                       rightsize++;
                       //possize++;
                       break;
               }
            }
        }
        
        printf("\n%d of the digits (",rightsize);
        
        for(j=0;j<rightsize;j++){
            printf("%d,",right[j]);
        }
        printf("\b) ");
        if(rightsize==0){
            printf("\b\b ");
        }
        printf("are correct and"); // one digit (3) is in proper position.")
        printf(" %d of the digits (",possize);
        for(j=0;j<possize;j++){
            printf("%d,",pos[j]);
        }
         printf("\b) ");
         if(possize==0){
            printf("\b\b ");
        }
         printf("is in proper position.\n");
        
       // printf("\n%d,%d,%d,%d\n%d,%d,%d,%d",digit1[0],digit1[1],digit1[2],digit1[3],guess[0],guess[1],guess[2],guess[3]);
    }
    }
    printf("the correct answer was:%d %d %d %d",digit[0],digit[1],digit[2],digit[3]);
    return 0;
}
/*ENTER THE NUMBER:
4564

0 of the digits  are correct and 0 of the digits  is in proper position.

ENTER THE NUMBER:
1239

1 of the digits (1) are correct and 1 of the digits (1) is in proper position.

ENTER THE NUMBER:
1589

1 of the digits (1) are correct and 1 of the digits (1) is in proper position.

ENTER THE NUMBER:
1999

1 of the digits (1) are correct and 1 of the digits (1) is in proper position.

ENTER THE NUMBER:
1605

2 of the digits (1,0) are correct and 2 of the digits (1,0) is in proper position.
the correct answer was:1 7 0 7*/