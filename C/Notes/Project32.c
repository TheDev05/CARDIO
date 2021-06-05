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

// #include <stdio.h>
// #define size_row 3
// #define size_coloumn 3

// int main()
// {
//     int matrix[size_row][size_coloumn];

//     printf("ENTER YOUR MATRIX\n");

//     for (int i = 0; i < size_row; i++)
//     {
//         for (int j = 0; j < size_coloumn; j++)
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     printf("YOR ENTERED MATRIX IS:\n");

//     for (int i = 0; i < size_row; i++)
//     {
//         printf("\n");
//         for (int j = 0; j < size_coloumn; j++)
//         {
//             printf("  %d", matrix[i][j]);
//         }
//     }

//     return 0;
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#define col 10

void show(int num[][col], int, int);

int main()
{
    int row;
    printf("ENTER ROW LIMIT:\n");
    scanf("%d", &row);

    int num[row][col];
    int colu;
    printf("ENTER COLOUMN LIMIT:\n");
    scanf("%d", &colu);

    printf("ENTER YOUR MATRIX:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colu; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    show(num, row, colu);
    return (0);
}

void show(int num[][col], int row, int colu)
{
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < colu; j++)
        {
            printf("%d ", num[i][j]);
        }
    }

    return;
}