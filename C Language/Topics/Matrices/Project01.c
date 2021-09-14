//** Add two matrices.
//** 20.02.2021

#include <stdio.h>
int main()
{
    int num1[20][20], num2[20][20], num3[50][50], row, col;

    printf("ENTER MATRIX ROW LIMIT:\n");
    scanf("%d", &row);

    printf("ENTER MATRIX COLOUMN LIMIT:\n");
    scanf("%d", &col);

    printf("ENTER YOUR FIRST MATRIX:\n");
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

    printf("YOUR FIRST INPUT MATRIX LOOKS AS:\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf(" %d", num1[i][j]);
        }
    }

    printf("\nYOUR SECOND INPUT MATRIX LOOKS AS:\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf(" %d", num2[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            num3[i][j] = num2[i][j] + num1[i][j];
        }
    }

    printf("\n AFTED ADDING BOTH:\n");

    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf(" %d", num3[i][j]);
        }
    }

    return (0);
}