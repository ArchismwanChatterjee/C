/*
Create an array of characters considering size of your choice
a)Load with Random alphabets
b)Replace all vowels with * and print the array
[Considering a particular case i.e. either lower or upper]
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int i, n, min, max;
    char ch[10];
    for (char i = 0; i < 10; i++)
    {
        ch[i] = 65 + rand() % 25;
        printf("%c", ch[i]);
        if (ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
            ch[i] = '*';
    }
    printf("\nRequired Array is \n");
    for (char i = 0; i < 10; i++)
        printf("%c", ch[i]);
    return 0;
}
/*
OUTPUT

IIWERGNJTO
Required Array is
**W*RGNJT*

*/
