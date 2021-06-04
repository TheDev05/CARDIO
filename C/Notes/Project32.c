//**********READING OF A 2D ARRAY AND PRINTING ITS VALUE***********

// #include <stdio.h>

// int main()
// {
//     int arr[20][20], count;

//     printf("ENTER INPUT DATA LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = 0; j < count; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     printf("YOUR NUMBER SIS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("\n");
//         for (int j = 0; j < count; j++)
//         {
//             printf(" %d", arr[i][j]);
//         }
//     }
//     return (0);
// }

#include <stdio.h>
#define size_row 3
#define size_coloumn 3

int main()
{
    int matrix[size_row][size_coloumn];

    printf("ENTER YOUR MATRIX\n");

    for (int i = 0; i < size_row; i++)
    {
        for (int j = 0; j < size_coloumn; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("YOR ENTERED MATRIX IS:\n");

    for (int i = 0; i < size_row; i++)
    {
        printf("\n");
        for (int j = 0; j < size_coloumn; j++)
        {
            printf("  %d", matrix[i][j]);
        }
    }

    return 0;
}