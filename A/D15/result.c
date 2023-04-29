// In a class there are 20 students. Each student is supposed to appear in three tests and two
// quizzes throughout the year. Make an array that stores names of all those 20 students.
// Make five arrays that stores marks of three subjects and two quizzes for all the students.
// Calculate the average and total marks of each student. Display the results.

#include <stdio.h>
// stores the number of students
int len = 20;

int main()
{
    char names[len][100];
    int sub1[len], sub2[len], sub3[len], quiz1[len], quiz2[len];

    printf("Enter the names and performances of the students\n");
    for (int i = 0; i < len; i++)
    {
        printf("Enter name of student %d\n", i + 1);
        scanf("%s", &names[i]);
        
        printf("Enter marks in 3 subjects and 2 quizzes respectively\n");

        scanf("%d %d %d %d %d", &sub1[i],&sub2[i],&sub3[i],&quiz1[i],&quiz2[i]);
    }

    printf("\n\nNames and performance of the students\n\n");

    for (int i = 0; i < len; i++)
    {
        printf("%d.%s\nTotal : %d\nAverage : %f\n\n", i + 1, names[i], (sub1[i] + sub2[i] + sub3[i] + quiz1[i] + quiz2[i]), (sub1[i] + sub2[i] + sub3[i] + quiz1[i] + quiz2[i]) / 5.0);
    }
}
/*
Enter name of student 1
a
Enter marks in 3 subjects and 2 quizzes respectively
1 2 3 4 5
Enter name of student 2
b
Enter marks in 3 subjects and 2 quizzes respectively
2 3 4 5 6
Enter name of student 3
c
Enter marks in 3 subjects and 2 quizzes respectively
3 4 5 6 7
Enter name of student 4
d
Enter marks in 3 subjects and 2 quizzes respectively
4 5 6 7 8
Enter name of student 5
e
Enter marks in 3 subjects and 2 quizzes respectively
5 6 7 8 9
Enter name of student 6
f 
Enter marks in 3 subjects and 2 quizzes respectively
6 7 8 9 10
Enter name of student 7
abc
Enter marks in 3 subjects and 2 quizzes respectively
7 8 9 10 11
Enter name of student 8
bca
Enter marks in 3 subjects and 2 quizzes respectively
8 9 10 11 12
Enter name of student 9
ab
Enter marks in 3 subjects and 2 quizzes respectively
9 10 11 12 13
Enter name of student 10
bc
Enter marks in 3 subjects and 2 quizzes respectively
10 20 30 40 50
Enter name of student 11
ac
Enter marks in 3 subjects and 2 quizzes respectively
50 60 70 80 90
Enter name of student 12
gf
Enter marks in 3 subjects and 2 quizzes respectively
90 100 20 80 50
Enter name of student 13
dc
Enter marks in 3 subjects and 2 quizzes respectively
60 90 80 100 40
Enter name of student 14
gg
Enter marks in 3 subjects and 2 quizzes respectively
18 19 20 25 26
Enter name of student 15
gk
Enter marks in 3 subjects and 2 quizzes respectively
91 92 18 44 59
Enter name of student 16
fb
Enter marks in 3 subjects and 2 quizzes respectively
81 23 43 21 61
Enter name of student 17
wp
Enter marks in 3 subjects and 2 quizzes respectively
12 13 14 15 16 
Enter name of student 18
gadzrux
Enter marks in 3 subjects and 2 quizzes respectively
91 92 93 94 95
Enter name of student 19
suka
Enter marks in 3 subjects and 2 quizzes respectively
96 97 98 99 100
Enter name of student 20
archosaur
Enter marks in 3 subjects and 2 quizzes respectively
100 100 100 100 100


Names and performance of the students

1.a
Total : 15
Average : 3.000000

2.b
Total : 20
Average : 4.000000

3.c
Total : 25
Average : 5.000000

4.d
Total : 30
Average : 6.000000

5.e
Total : 35
Average : 7.000000

6.f
Total : 40
Average : 8.000000

7.abc
Total : 45
Average : 9.000000

8.bca
Total : 50
Average : 10.000000

9.ab
Total : 55
Average : 11.000000

10.bc
Total : 150
Average : 30.000000

11.ac
Total : 350
Average : 70.000000

12.gf
Total : 340
Average : 68.000000

13.dc
Total : 370
Average : 74.000000

14.gg
Total : 108
Average : 21.600000

15.gk
Total : 304
Average : 60.800000

16.fb
Total : 229
Average : 45.800000

17.wp
Total : 70
Average : 14.000000

18.gadzrux
Total : 465
Average : 93.000000

19.suka
Total : 490
Average : 98.000000

20.archosaur
Total : 500
Average : 100.000000
*/