// Write a C Program Interchange any two Rows &Columns in the given
// Matrix.
#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Read the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("The matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int ch;
    while (1)
    {
        printf("\nEnter 1 to interchange rows \n2 to interchange columns \n3 to terminate the program: \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            int r1, r2, temp;
            printf("Enter the row numbers to interchange: ");
            scanf("%d %d", &r1, &r2);

            // Interchange rows
            for (j = 0; j < cols; j++)
            {
                temp = matrix[r1 - 1][j];
                matrix[r1 - 1][j] = matrix[r2 - 1][j];
                matrix[r2 - 1][j] = temp;
            }

            // Display the modified matrix
            printf("The modified matrix is:\n");
            for (i = 0; i < rows; i++)
            {
                for (j = 0; j < cols; j++)
                {
                    printf("%d ", matrix[i][j]);
                }
                printf("\n");
            }
        }
        break;
        case 2:
        {
            int c1, c2;
            printf("Enter the column numbers to interchange: ");
            scanf("%d %d", &c1, &c2);

            // Interchange columns
            for (int i = 0; i < rows; i++)
            {
                int temp = matrix[i][c1 - 1];
                matrix[i][c1 - 1] = matrix[i][c2 - 1];
                matrix[i][c2 - 1] = temp;
            }

            // Display the modified matrix
            printf("The modified matrix is:\n");
            for (i = 0; i < rows; i++)
            {
                for (j = 0; j < cols; j++)
                {
                    printf("%d ", matrix[i][j]);
                }
                printf("\n");
            }
        }
        break;
        case 3:
            printf("Program terminated.\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
// output :
// Enter the number of rows : 3
// Enter the number of columns : 3
// Enter the elements of the matrix :
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// The matrix is :
// 1 2 3
// 4 5 6
// 7 8 9

// Enter 1 to interchange rows
// 2 to interchange columns
// 3 to terminate the program :
//  1
// Enter the row numbers to interchange : 1 2
// The modified matrix is :
// 4 5 6
// 1 2 3
// 7 8 9
// Enter 1 to interchange rows
// 2 to interchange columns
// 3 to terminate the program :
// 2
// Enter the column numbers to interchange : 3 2
// The modified matrix is :
// 4 6 5
// 1 3 2
// 7 9 8
// Enter 1 to interchange rows
// 2 to interchange columns
// 3 to terminate the program :
// 3
// Program terminated.