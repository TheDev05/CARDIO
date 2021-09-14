//** STORING STUDENT INFORMATIONS USING ARRAY OF STRUCTURES
//** 06.03.2021

// #include <stdio.h>
// #include <string.h>

// typedef struct
// {
//     char name[20];
//     int roll;
//     float marks;
// } result;

// result student[10];
// result find(int,int); //? FUNCTION PRTOTYPE ONLY DECLARATION...INPUT-OUTPUT TYPES, RETURN TYPES ETC

// int main()
// {
//     result data;
//     int count, det;
//     printf("ENTER THE NUMBER OF STUDENTS:\n");
//     scanf("%d", &count);

//     printf("****ENTER STUDENTS DETAILS****\n");
//     for (int i = 0; i < count; i++)
//     {
//         fflush(stdin);
//         printf("ENTER STUDENT NAME:\n");
//         scanf("%[^\n]%*c", student[i].name);

//         printf("ENTER ROLL NUMBER:\n");
//         scanf("%d", &student[i].roll);

//         printf("ENTER STUDENTS MARKS:\n");
//         scanf("%f", &student[i].marks);
//     }

//     printf("ENTER THE ROLL YOU WANT TO FIND DETAILS:\n");
//     scanf("%d", &det);

//     data = find(det, count); //? WHAT WE NEED IN CALLED FUNCTION ALL THAT THING WHICH IS NEEDY THERE WILL BE PASSED AS ARGUMENT

//     printf("NAME: %s\n", data.name);
//     printf("ROLL_NUMBER: %d\n", data.roll);
//     printf("MARKS: %.2f\n", data.marks);

//     return (0);
// }

// result find(a, count) //? FUNCTION DEFINITION
// int a,count;
// {
//     result temp;
//     for (int i = 0; i < count; i++)
//     {
//         if (a == student[i].roll)
//         {
//             strcpy(temp.name, student[i].name);
//             temp.marks = student[i].marks;
//             temp.roll = student[i].roll;
//             return (temp);
//         }
//     }
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
    int count;

    printf("ENTER NUMBER OF STUDENTS:\n");
    scanf("%d", &count);

    struct data stud[count];

    for (int i = 0; i < count; i++)
    {

        fflush(stdin);

        printf("ENTER STUDENT NAME:\n");
        scanf("%[^\n]%*c", stud[i].name);

        printf("ENTER STUDENT ROLL_NUMBER: \n");
        scanf("%d", &stud[i].roll);

        fflush(stdin);

        printf("ENTER STUDENT MARKS: \n");
        scanf("%d", &stud[i].marks);

        fflush(stdin);
    }

    int find;
    printf("ENTER STUDENT ROLL NUMBER TO FIND: \n");
    scanf("%d", &find);

    for (int i = 0; i < count; i++)
    {
        if (find == stud[i].roll)
        {
            printf("NAME: %s\n", stud[i].name);
            printf("ROLL; %d\n", stud[i].roll);
            printf("MARKS: %d\n", stud[i].marks);

            break;
        }
    }

    return (0);
}