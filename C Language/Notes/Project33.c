//*********ADDING TWO MATRIX*******

// #include <stdio.h>
// int main()
// {
//     int arr1[3][3], arr2[3][3], arr3[6][6];
// int count=3;

//     printf("ENTER YOUR first NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = 0; j < count; j++)
//         {
//             scanf("%d", &arr1[i][j]);
//         }
//     }

//     printf("ENTER YOUR second NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         for (int j = 0; j < count; j++)
//         {
//             scanf("%d", &arr2[i][j]);
//         }
//     }

//     for (int i = 0; i < count; i++)
//     {
//         for (int j = 0; j < count; j++)
//         {
//             arr3[i][j] = arr1[i][j] + arr2[i][j];
//         }
//     }

//     printf("FINAL MATRIX IS AFTER ADDITION:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("\n");
//         for (int j = 0; j < count; j++)
//         {
//             printf(" %d", arr3[i][j]);
//         }
//     }

//     return (0);
// }

// #include <stdio.h>

// int main()
// {
//     int mat1[3][3], mat2[3][3], mat3[3][3];
//     int sum = 0;

//     printf("ENTER YOUR FIRST MATRIX:\n");

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &mat1[i][j]);
//         }
//     }

//     printf("ENTER YOUR SECOND MTRIX:\n");

//     for (int m = 0; m < 3; m++)
//     {
//         for (int n = 0; n < 3; n++)
//         {
//             scanf("%d", &mat2[m][n]);
//         }
//     }

//     for (int p = 0; p < 3; p++)
//     {
//         for (int q = 0; q < 3; q++)
//         {
//             mat3[p][q] = mat1[p][q] + mat2[p][q];
//         }
//     }

//     printf("YOUR REQUIRED MATRIX IS:\n");
//     for (int p = 0; p < 3; p++)
//     {
//         printf("\n");
//         for (int q = 0; q < 3; q++)
//         {
//             printf("  %d", mat3[p][q]);
//         }
//     }

//     return 0;
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#define colu 10

void add_matrix(int num1[][colu], int num2[][colu], int, int);

int main()
{
    int row, col;
    printf("ENTER ROW THEN COLUMN LIMIT:\n");
    scanf("%d %d", &row, &col);

    int num1[row][colu], num2[row][colu];

    printf("ENTER YOUR FIRST MATRIX:");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num1[i][j]);
        }
    }

    printf("ENTER YOUR SECOND MATRIX:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num2[i][j]);
        }
    }

    add_matrix(num1, num2, row, col);
    return (0);
}

void add_matrix(int num1[][colu], int num2[][colu], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf("%d ", num1[i][j] + num2[i][j]);
        }
    }

    return;
}