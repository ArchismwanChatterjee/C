// Write a C program to check a square matrix is symmetric or not.
// (An array A is symmetric if A[i][j]=A[j][i] for all i and j.)

#include <stdio.h>
int main()
{

    int n, i, j;
    int isSymmetric = 1;

    // Read the matrix size from the user
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];

    // Read the elements of the matrix from the user
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric or not
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric == 0)
        {
            break;
        }
    }

    // Print the result
    if (isSymmetric == 1)
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
