//** Check whether two matrices are equal or not.
//** 20.02.2021

#include <stdio.h>
int main()
{
    int num1[20][20], num2[20][20], row, col;
    int key = 0;

    printf("ENTER ROW AND COLOUMN LIMIT:\n");
    scanf("%d %d", &row, &col);

    printf("ENTER FIRST MATRIX:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num1[i][j]);
        }
    }

    printf("ENTER SECOND MATRIX:\n");
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
            if (num1[i][j] != num2[i][j])
            {
                key++;
            }
        }
    }

    if (key > 0)
    {
        printf("TWO MATRICES ARE NOT EQUAL\n");
    }
    else
        printf("TWO MATRICES ARE EQUAL\n");

    return (0);
}