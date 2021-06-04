//**  Add two matrix using pointers.
//! DOUBT: HOW TO RETURN A 1D OR 2D ARRAY?

#include <stdio.h>
int col = 2;
// void add(int num1[][col], int num2[][col], int sum[][col], int);//? use this dont use int* here.
void add(int (*num1)[col], int (*num2)[col], int (*sum)[col], int);

int main()
{
    int num1[10][col], num2[10][col], sum[10][col];
    int row;

    printf("ENTER ROW LIMIT:\n");
    scanf("%d", &row);

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

    add(num1, num2, sum, row);

    printf("OUTPUT:\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf("%d ", sum[i][j]);
        }
    }

    return (0);
}

void add(int num1[][col], int num2[][col], int sum[][col], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = num1[i][j] + num2[i][j];
        }
    }
}