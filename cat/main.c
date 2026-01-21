#include <stdio.h>
#include <stdlib.h>

// Grade cut-off marks
const int A_MARKS = 70;
const int B_MARKS = 60;
const int C_MARKS = 50;

// Student structure definition
typedef struct
{
    char regNo[99];
    char name[99];
    int marks;
} Student;

// Function to calculate grade based on marks
char calculateGrade(Student *student)
{
    if (student->marks > A_MARKS)
    {
        return 'A';
    }
    else if (student->marks > B_MARKS)
    {
        return 'B';
    }
    else if (student->marks > C_MARKS)
    {
        return 'C';
    }
    else
    {
        return 'F';
    }
}

// Compare function used by qsort to sort students by marks (highest first)
int compareStudents(const void *a, const void *b)
{
    Student student1 = *(const Student *)a;
    Student student2 = *(const Student *)b;

    return student2.marks - student1.marks;
}

// Sort the students by marks in descending order
void sortStudents(Student students[], int count)
{
    qsort(students, count, sizeof(Student), compareStudents);
}

int main()
{
    Student students[999];
    int numberOfStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    // Input student details
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("\nEntering data for student #%d\n", i + 1);

        printf("Registration Number: ");
        scanf("%s", students[i].regNo);

        printf("Student Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Sort students by marks
    sortStudents(students, numberOfStudents);

    // Print results table
    printf("\nRegNo\t\tName\t\tMarks\tGrade\n");
    printf("---------------------------------------------------\n");

    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("%s\t\t%s\t\t%d\t%c\n", students[i].regNo, students[i].name, students[i].marks, calculateGrade(&students[i]));
    }

    // Print top student
    printf("\nTop Student:\n");
    printf("%s\t\t%s\t\t%d\t%c\n", students[0].regNo, students[0].name, students[0].marks, calculateGrade(&students[0]));

    return 0;
}
