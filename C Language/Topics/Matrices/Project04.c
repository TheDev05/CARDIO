//** Interchange diagonals of a matrix.
//** 20.02.2021

#include <stdio.h>
int main()
{
    int num[20][20], row, col, row1, col1, res1, res2;

    printf("ENTER ROW AND COLOUMN OF MATRIX:\n");
    scanf("%d %d", &row, &col);

    printf("ENTER NUMBERS:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    printf("YOUR MATRIX:\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf(" %d", num[i][j]);
        }
    }

    row1 = row / 2;
    col1 = col / 2;

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {

            if (i == j)
            {
                res1 = num[i][j];
                num[i][j] = num[i][col - 1 - i];
                num[i][col - 1 - i] = res1;

                res2 = num[row - 1 - i][col - 1 - i];
                num[row - 1 - i][col - 1 - i] = num[row - 1 - i][j];
                num[row - 1 - i][j] = res2;
            }
        }
    }

    printf("\nOUTPUT:\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf(" %d", num[i][j]);
        }
    }
}