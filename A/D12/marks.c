// Write a program in C to read a two-dimensional array named marks which
// will store marks of m students in n subjects and will print
// a. The marks obtained by each student in different subjects
// b. Total marks and average obtained by each student
// c. Class average
// d. Highest marks in each subject
#include <stdio.h>

int main()
{
    int m, n, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &m);
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    // taking input
    int marks[m][n];
    for (i = 0; i < m; i++)
    {
        printf("Enter the marks of student %d: ", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }

    // Printing the marks of each student in different subjects
    printf("\nMarks of each student in different subjects:\n");
    for (i = 0; i < m; i++)
    {
        printf("Student %d: ", i + 1);
        for (j = 0; j < n; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    // Printing the total marks and average obtained by each student
    printf("\nTotal marks and average obtained by each student:\n");
    for (i = 0; i < m; i++)
    {
        int total_marks = 0;
        for (j = 0; j < n; j++)
        {
            total_marks += marks[i][j];
        }
        printf("Student %d: Total marks = %d, Average = %.2f\n", i + 1, total_marks, (float)total_marks / n);
    }

    // Printing the class average
    printf("\nClass average: ");
    float class_total_marks = 0.0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            class_total_marks += marks[i][j];
        }
    }
    printf("%.2f\n", class_total_marks / (m * n));

    // Printing the highest marks in each subject
    printf("\nHighest marks in each subject:\n");
    for (j = 0; j < n; j++)
    {
        int highest_marks = 0;
        for (i = 0; i < m; i++)
        {
            if (marks[i][j] > highest_marks)
            {
                highest_marks = marks[i][j];
            }
        }
        printf("Subject %d: %d\n", j + 1, highest_marks);
    }

    return 0;
}
// // output:
// // Enter the number of students: 4
// Enter the number of subjects : 3
// Enter the marks of student 1 : 66 77 96
// Enter the marks of student 2 : 88 99 42
// Enter the marks of student 3 : 33 44 75
// Enter the marks of student 4 : 44 77 88

// Marks of each student in different subjects :
// Student 1 : 66 77 96
// Student 2 : 88 99 42
// Student 3 : 33 44 75
// Student 4 : 44 77 88

// Total marks and average obtained by each student :
// Student 1 : Total marks = 239, Average = 79.67
// Student 2 : Total marks = 229, Average = 76.33
// Student 3 : Total marks = 152, Average = 50.67
// Student 4 : Total marks = 209, Average = 69.67

// Class average : 69.08

// Highest marks in each subject :
// Subject 1 : 88
// Subject 2 : 99
// Subject 3 : 96