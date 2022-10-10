//**C Program to print uppder ande lower diagonal traingle elmets of a matrix.

// #include <stdio.h>
// int main()
// {
//     int row, col;
//     printf("ENTER ROW AND COLUMN LIMIT: \n");
//     scanf("%d %d", &row, &col);

//     int num[row][col];

//     printf("ENTER YOUR MATRIX: \n");
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             scanf("%d", &num[i][j]);
//         }
//     }

//     printf("LOWER DIAGONAL: \n");
//     for (int i = 0; i < row; i++)
//     {
//         printf("\n");
//         for (int j = 0; j < i + 1; j++)
//         {
//             printf("%d ", num[i][j]);
//         }
//     }

//     printf("\nUPPER DIAGONAL: \n");
//     int count = col - 1;

//     for (int i = 0; i < row; i++)
//     {
//         printf("\n");
//         for (int k = 0; k < col; k++)
//         {
//             if (k == count)
//             {
//                 for (int j = count; j < col; j++)
//                 {
//                     printf("%d ", num[i][j]);
//                 }
//             }
//             else
//                 printf("  ");
//         }

//         count--;
//     }

//     return (0);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    int row, col;

    printf("ENTER ROW AND COLUMN LIMIT:\n");
    scanf("%d %d", &row, &col);

    int num[row][col];

    printf("ENTER YOUR MATRIX:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    printf("UPPER MATRIX: \n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            if (j <= i)
            {
                printf("%d ", num[i][j]);
            }
            else
                printf(" ");
        }
    }

    printf("LOWER MATRIX: \n");
    int m = col - 1, k = 0;

    for (int i = 0; i < row; i++)
    {
        int key = 0;
        printf("\n");

        for (int j = 0; j < col; j++)
        {

            if (j < m)
            {
                printf("  ");
            }
            else
                printf("%d ", num[i][j]);
        }
        m--;
    }

    return (0);
}