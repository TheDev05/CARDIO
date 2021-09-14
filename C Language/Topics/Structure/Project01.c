//***Store information of a student using structure

// #include <stdio.h>

// int main()
// {
//     typedef struct
//     {
//         char name[20];
//         int roll;
//         float marks;
//     } information;

//     information student;

//     printf("ENTER STUDENT NAME:\n");
//     scanf("%[^\n]%*c", student.name);

//     printf("ENTER STUDENT ROLL NO:\n");
//     scanf("%d", &student.roll);

//     printf("ENTER STUDENT MARKS:\n");
//     scanf("%f", &student.marks);

//     printf("STUDENT NAME: %s\n", student.name);

//     printf("STUDENT ROLL NO: %d\n", student.roll);

//     printf("STUDENT MARKS: %f\n", student.marks);

//     return (0);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

struct data
{
    char name[20];
    int roll;
    int marks;
};

int main()
{
    struct data stud;

    printf("ENTER STUDENT NAME:\n");
    scanf("%[^\n]%*c", stud.name);

    printf("ENTER STUDENT ROLL NUMBER:\n");
    scanf("%d", &stud.roll);

    getchar();

    printf("ENTER STUDENT MARKS:\n");
    scanf("%d", &stud.marks);

    printf("STUDENTS_NAME: %s\n", stud.name);
    printf("STUDENT MARKS: %d\n", stud.marks);
    printf("STUDENT ROLL_NUMBER: %d\n", stud.roll);

    return (0);
}