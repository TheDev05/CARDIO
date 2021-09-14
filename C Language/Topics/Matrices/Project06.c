//** Multiply two matrices.
//** 21.02.2021

//!!! BUGGY


#include <stdio.h>
int main()
{
    int num1[20][20], num2[20][20], row, col;

    printf("ENTER ROW AND COLOUMN LIMIT:\n");
    scanf("%d %d", &row, &col);

    printf("ENTER YOUR MATRIX:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num1[i][j]);
        }
    }

    printf("ENTER SCOND MATRIX:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num2[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            num1[i][j] = (num1[i][j] * num2[i][j]) + (num1[i][j + 1] * num2[i + 1][j]);
        }
    }

    printf("OUTPUT\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf(" %d", num1[i][j]);
        }
    }
    return (0);
}