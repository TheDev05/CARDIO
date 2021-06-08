//**C Program to find Sum of all elements of each row of a matrix.

// #include <stdio.h>
// int main()
// {
//     int row, col;
//     printf("ENTER ROE AND COLUMN OF MATRIX:\n");
//     scanf("%d %d", &row, &col);

//     int num[row][col];
//     int sum = 0;

//     printf("ENTER YOUR MATRIX: \n");
//     for (int i = 0; i < row; i++)
//     {

//         for (int j = 0; j < col; j++)
//         {
//             scanf("%d", &num[i][j]);
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         sum = 0;
//         for (int j = 0; j < col; j++)
//         {

//             sum += num[i][j];
//         }
//         printf("%d ROW SUM IS: %d\n", i + 1, sum);
//     }

//     return (0);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    int row, col;
    printf("ENTER ROW AND COLOUMN LIMIT:\n");
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

    for (int i = 0; i < row; i++)
    {
        printf("ROW %d: ", i);
        for (int j = 0; j < col; j++)
        {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    return (0);
}