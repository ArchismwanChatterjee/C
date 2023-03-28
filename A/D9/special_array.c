// Write a menu driven program in C, which will develop a restricted array in which we can insert or remove an
// item at the top of the array only(Here top is a special index).In a normal array, we can access any of its elements
//  using indexing, but here we can only access the top most element in the array using top index.The top index is initialized to - 1.
//  Every time you will insert in this array by incrementing top by one while you can delete an element from this array by decreasing top by one.
//  You will add 4 operations with respect to this restricted array.These are(1) insert(2) delete(3)array - empty(4) array - full.
#include <stdio.h>

int main()
{
    int top = -1, ch = -1; // top index initialized to -1
    int array[10];         // restricted array

    while (ch != 0)
    {
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Array Empty\n");
        printf("4. Array Full\n");
        printf("0. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            // insert
            if (top == 9)
            {
                printf("\nError: Cannot insert. Array is full.\n");
            }
            else
            {
                int item;
                printf("\nEnter the item to insert: ");
                scanf("%d", &item);
                top++;
                array[top] = item;
                printf("\nItem inserted successfully.\n");
            }
            break;
        case 2:
            // delete
            if (top == -1)
            {
                printf("\nError: Cannot delete. Array is empty.\n");
            }
            else
            {
                printf("\nItem %d deleted successfully.\n", array[top]);
                top--;
            }
            break;
        case 3:
            if (top == -1)
            {
                printf("\nArray is empty.\n");
            }
            else
            {
                printf("\nArray is not empty.\n");
            }
            break;
        case 4:
            if (top == 9)
            {
                printf("\nArray is full.\n");
            }
            else
            {
                printf("\nArray is not full.\n");
            }

            break;
        case 0:
            printf("\nExiting the program...\n");
            break;
        default:
            printf("\nInvalid choice. Please try again.\n");
        }
    }

    return 0;
}
/*
1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 1

Enter the item to insert: 10

Item inserted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 3

Array is not empty.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 4

Array is not full.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 1

Enter the item to insert: 4

Item inserted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 1

Enter the item to insert: 7

Item inserted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 1

Enter the item to insert: 5

Item inserted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 1

Enter the item to insert: 6

Item inserted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 1

Enter the item to insert: 9

Item inserted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 1

Enter the item to insert: 4

Item inserted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 1

Enter the item to insert: 5

Item inserted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 1

Enter the item to insert: 7

Item inserted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 1

Enter the item to insert: 0

Item inserted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 1

Error: Cannot insert. Array is full.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 5

Invalid choice. Please try again.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 1

Error: Cannot insert. Array is full.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 4

Array is full.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 2

Item 0 deleted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 2

Item 7 deleted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 2

Item 5 deleted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 2

Item 4 deleted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 2

Item 9 deleted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 22

Invalid choice. Please try again.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 2

Item 6 deleted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 2

Item 5 deleted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 2

Item 7 deleted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 2

Item 4 deleted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 2

Item 10 deleted successfully.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 2

Error: Cannot delete. Array is empty.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 2

Error: Cannot delete. Array is empty.

1. Insert
2. Delete
3. Array Empty
4. Array Full
0. Exit

Enter your choice: 0*/