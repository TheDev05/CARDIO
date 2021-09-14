//**C Program to Read and Print a RxC Matrix, R and C must be input by the User.

#include <stdio.h>
int main()
{
    int row, col;
    printf("ENTER ROW AND COLOUMN LIMIT:\n");
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

    printf("YOUR MATRIX IS: \n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf("%d ", num[i][j]);
        }
    }

    return (0);
}