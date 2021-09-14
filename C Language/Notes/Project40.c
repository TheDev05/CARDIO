//**STORING NAMES, ROLL AND MARKS IN SCHOL DIRECTORY
//??? IMPORTANT CONCEPT OF FFLUSH AND SCANF
//???  CHECK: https://stackoverflow.com/questions/5240789/scanf-leaves-the-new-line-char-in-the-buffer

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name[10][20];
//     int roll[10], store, count;
//     float marks[10];

//     printf("ENTER NUMBER OF STUDENTS:\n");
//     scanf("%d", &count);

//     for (int i = 0; i < count; i++)
//     {
//         fflush(stdin);//? IMPORTANT CHECK NOTES FOR FURTHER CONCEPT
//         printf("ENTER STUDENT NAME:\n");
//         scanf("%[^\n]%*c", &name[i]);

//         printf("ENTER STUDENT ROLL NUMBER:\n");
//         scanf("%d", &roll[i]);

//         printf("ENTER STUDENTS MARKS:\n");
//         scanf("%f", &marks[i]);
//     }

//     for (int i = 0; i < count; i++)
//     {
//         if (marks[0] < marks[i])
//         {
//             marks[0] = marks[i];
//             store = i;
//         }
//     }

//     printf("THE MAXIMIM SCORING STUDENT IS:\n");
//     printf("NAME: %s\n ROLL NO: %d\n MARKS: %.2f\n", name[store], roll[store], marks[store]);

//     return (0);
// }

#include <stdio.h>
int main()
{

    int count;

    printf("ENTER NUMBER OF STUDENTS:\n");
    scanf("%d", &count);

    char name[count][20];
    int roll[count];
    int marks[count];

    for (int i = 0; i < count; i++)
    {
        fflush(stdin);
        printf("ENTER STUDENT NAME:\n");
        fgets(name[i], 20, stdin);

        fflush(stdin);
        printf("ENTER ROLL NUMBERS:\n");
        scanf("%d", &roll[i]);

        fflush(stdin);
        printf("ENTER MARKS:\n");
        scanf("%d", &marks[i]);
    }

    int max = marks[0];
    int index = 0;
    for (int i = 0; i < count; i++)
    {
        if (max < marks[i])
        {
            max = marks[i];
            index = i;
        }
    }

    printf("MAXIMUM MARKS HOLDED BY:\n");
    printf("NAME: %s\nROLL: %d\nMARKS: %d\n", name[index], roll[index], marks[index]);

    return (0);
}