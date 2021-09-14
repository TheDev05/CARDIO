//** The lower triangular matrix.

// #include <stdio.h>
// #define col 10
// void show_triaMatrix(int p[][col], int, int);

// int main()
// {
//     int num[10][col];
//     int row, colu;

//     printf("ENTER YOUR ROW LIMIT: \n");
//     scanf("%d", &row);

//     printf("ENTER YOUR COLOUMN LIMIT: \n");
//     scanf("%d", &colu);

//     printf("ENTER YOUR MATRIX: \n");
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < colu; j++)
//         {
//             scanf("%d", &num[i][j]);
//         }
//     }

//     show_triaMatrix(num, row, colu);

//     return (0);
// }

// void show_triaMatrix(int num[][col], int row, int colu)
// {
//     int temp = 1, res_temp;

//     for (int i = 0; i < row; i++)
//     {
//         res_temp = temp;

//         while (temp < colu)
//         {
//             num[i][temp] = 0;
//             temp++;
//         }

//         temp = res_temp;
//         int j = 0;

//         printf("\n");
//         for (j; j < colu; j++)
//         {
//             printf("%d ", num[i][j]);
//         }

//         temp++;
//     }
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#define colu 10

void read(int num[][colu], int row, int col)
{
    printf("ENTER YOUR MATRIX:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
}

void write(int num[][colu], int row, int col)
{
    printf("REQUIRED MATRIX: \n");
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
                printf("0 ");
        }
    }
}

int main()
{
    int row, col;

    printf("ENTER YOUR ROW THEN COLOUMN LIMIT:\n");
    scanf("%d %d", &row, &col);

    int num[row][colu];

    read(num, row, col);
    write(num, row, col);

    return (0);
}