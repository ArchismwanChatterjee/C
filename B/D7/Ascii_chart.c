//WAP to display ascii chart in page format each page will display total 5 ascii and user can turn to next page by entering any key also display the page number

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, x;
    int page=1;
    printf("\n PAGE:%d \n",page);
    char c;
    for (i = 0; i < 255; i = i + 1)
    {
        printf("%d \t %c \n", i, i);
        x ++;
        if (x % 5 == 0)
        {
            printf("\nPress any key to continue...\n");
            getch();
            page++;
            system("cls");
            printf("\n PAGE:%d \n",page);
        }
    }
    return 0;
}
/*
OUTPUT
PAGE:1 
0         
1        ☺ 
2        ☻ 
3        ♥ 
4        ♦ 
*/