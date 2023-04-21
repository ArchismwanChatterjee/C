/*Write a C program to find the sum of corresponding two individual elements
of two m×n matrices to get the resultant m×n matrix.*/
#include <stdio.h>

int main()
{
    int m, n, i, j;
    // Read the matrix size from the user
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &m, &n);

    int matrix1[m][n], matrix2[m][n], result[m][n];

    // input the elements of the first matrix from the user
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // input the elements of the second matrix from the user
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // calculating the sum of corresponding elements of the two matrices
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the resultant matrix
    printf("The resultant matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*output:
Enter the number of rows and columns of the matrices: 3 3
Enter the elements of the first matrix:
1 2 3
4 5 6
7 8 9
Enter the elements of the second matrix:
1 2 3
4 5 6
7 8 9
The resultant matrix is:
2 4 6
8 10 12
14 16 18*/
