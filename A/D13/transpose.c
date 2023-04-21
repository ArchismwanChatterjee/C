// Write C program to find the transpose of a given m×n matrix.
#include <stdio.h>

int main()
{
    int m, n, i, j;

    // Read the matrix size from the user
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n], transpose[n][m];
    // Read the matrix elements from the user
    printf("Enter the matrix elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Display the matrix
    printf("The matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    // Compute the transpose of the matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transpose of the matrix
    printf("The transpose of the matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*output:
Enter the number of rows and columns of the matrix: 3 3
Enter the matrix elements:
1 2 3
4 5 6
7 8 9
The matrix is:
1 2 3
4 5 6
7 8 9
The transpose of the matrix is:
1 4 7
2 5 8
3 6 9
*/
