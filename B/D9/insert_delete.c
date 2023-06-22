/*
Create an array containing n integers
a)insert a new value at any index position
b)delete an element from any position
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int a[100], b[100], c[100];
    int pos, val, i, n, del;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        a[i] = rand() % 100;
        printf("%d\t", a[i]);
        b[i] = a[i];
        c[i] = a[i];
    }
    printf("\n Enter the value to be added and the position\n");
    scanf("%d  %d", &val, &pos);
    printf("Enter the position where you want to delete: ");
    scanf("%d", &del);
    for (i = n - 1; i >= pos; i--)
    {
        b[i + 1] = b[i];
        b[pos] = val;
    }
    for (i = del; i < n - 1; i++)
    {
        c[i] = c[i + 1];
    }
    printf("\n The inserted array is \n");
    for (i = 0; i <= n; i++)
    {
        printf("%d\t", b[i]);
    }
    printf("\n The deleted array is \n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d\t", c[i]);
    }
    return 0;
}
/*
OUTPUT

Enter the size of Array : 10
15      93      26      56      84      87      60      70      37      2
 Enter the value to be added and the position
10
3
Enter the position where you want to delete: 3

 The inserted array is
15      93      26      10      10      84      87      60      70      37      2
 The deleted array is
15      93      26      84      87      60      70      37      2

*/