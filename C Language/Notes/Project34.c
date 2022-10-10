//************PRINTING OF MATRIX SIDE BY SIDE***************
// #include <stdio.h>
// int main()
// {

//     int matrix1[2][3];
//     int matrix2[2][3];
//     int p;

//     printf("ENTER YOUR INTERGRAL MATRIX:\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }

//     printf("ENTER YOUR CHARACTER MATRIX:\n");
//     for (int m = 0; m < 2; m++)
//     {
//         for (int n = 0; n < 3; n++)
//         {
//             fflush(stdin);
//             scanf("%c", &matrix2[m][n]);
//         }
//     }

//     printf("YOUR REQUIRED MATRIX IS :\n");

//     for (int q = 0; q < 3; q++)
//     {
//         p = 0;
//         printf("  %d", matrix1[p][q]);
//     }

//     for (int q = 0; q < 3; q++)
//     {
//         p = 0;
//         printf("  %d", matrix2[p][q]);
//     }

//     printf("\n");
//     for (int q = 0; q < 3; q++)
//     {
//         p = 1;

//         printf("  %d", matrix1[p][q]);
//     }

//     for (int q = 0; q < 3; q++)
//     {
//         p = 1;

//         printf("  %d", matrix2[p][q]);
//     }

//     return (0);
// }

//*********************************************************************************************************************
//?<1ST REVISE|17.02.2021>

#include <stdio.h>
int main()
{
    int arr[2][2], count;
    int arr1[2][2];
    count = 2;

    printf("ENTER YOUR NUMBER:\n");
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("ENTER YOUR CHARACTER:\n");
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            fflush(stdin);
            scanf("%c", &arr1[i][j]);
        }
    }

    printf("final:\n");
    for (int i = 0; i < count; i++)
    {
        printf("\n");

        for (int j = 0; j < count; j++)
        {

            printf(" %d", arr[i][j]);
        }
        for (int j = 0; j < count; j++)
        {

            printf(" %c", arr1[i][j]);
        }
    }

    return (0);
}

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#define colu 10

int main()
{
    int row, col;
    printf("ENTER ROW THEN COLUMN:\n");
    scanf("%d %d", &row, &col);

    int num[row][colu];
    char dig[row][colu];

    printf("ENTER NUMERICAL MATRIX:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    printf("ENTER CHARACTER MAYTIX:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            fflush(stdin);
            dig[i][j] = getchar();
        }
    }

    for (int i = 0; i < row; i++) //printing matrix
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf("%d ", num[i][j]);
        }

        for (int k = 0; k < col; k++)
        {
            printf(" ");
            putchar(dig[i][k]);
        }
    }

    return (0);
}
