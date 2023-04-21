// Write a C Program to read a matrix, display all elements and then find sum
// of all elements of each row of a matrix.
#include <stdio.h>

int main()
{
    int rows, cols, i, j, sum;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // taking input
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // display the matrix
    printf("The matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of each row
    for (i = 0; i < rows; i++)
    {
        sum = 0;
        for (j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
        printf("The sum of elements in row %d is %d\n", i + 1, sum);
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
// The sum of elements in row 1 is 6
// The sum of elements in row 2 is 15
// The sum of elements in row 3 is 24
