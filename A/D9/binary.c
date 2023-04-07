// Write a program in C to search an element using binary search.
// Elements are distinct and array is sorted
#include <stdio.h>
int main()
{
int i, low, high, mid, n, key, array[100];
printf("Enter number of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to find\n");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d.\n", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list.\n", key);
return 0;
}
/*Enter number of elements
5
Enter the elements
10 20 30 40 60
Enter value to find
20
20 found at location 2.*/