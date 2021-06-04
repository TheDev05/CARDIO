//* C Program to Read a Matrix and Print Diagonals.

#include <stdio.h>
int main()
{
    int row, col;
    printf("ENTER THE ROW AND COLOUMN LIMIT: \n");
    scanf("%d %d", &row, &col);

    int num[row][col];

    printf("ENTER YOUR MATRIX: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    int j = 0;

    printf("FIRST DIAGONAL: \n");
    for (int i = 0; i < row; i++)
    {

        printf("%d ", num[i][j]);
        j++;
    }

    j = col - 1;

    printf("\nSECOND DIAGONAL:\n");
    for (int i = 0; i < row; i++)
    {
        printf("%d ", num[i][j]);
        j--;
    }

    return (0);
}