/*Write a C program to multiply two matrices.*/
#include <stdio.h>
int main()
{
    int row1, col1, row2, col2, i, j, k;
    // Read the dimensions of the first matrix from the user
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &row1, &col1);
    int matrix1[row1][col1];
    // Read the elements of the first matrix from the user
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read the dimensions of the second matrix from the user
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &row2, &col2);
    int matrix2[row2][col2];
    // Read the elements of the second matrix from the user
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check if the matrices can be multiplied
    if (col1 != row2)
    {
        printf("The matrices cannot be multiplied.\n");
        return 0;
    }
    int result[row1][col2];
    // Multiply the matrices
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < col1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result
    printf("The result of matrix multiplication is:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*output
Enter the number of rows and columns of the first matrix: 3 4
Enter the elements of the first matrix:
1 2 3 4
5 6 5 8
9 10 11 12
Enter the number of rows and columns of the second matrix: 3 3
Enter the elements of the second matrix:
1 2 3
4 5 6
7 8 9
The matrices cannot be multiplied.*/