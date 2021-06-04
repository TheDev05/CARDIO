//**Find the sum of each row and column of a matrix

#include <stdio.h>
int main()
{
    int num[20][20], row, col, sum;

    printf("ENTER ROW LIMIT:\n");
    scanf("%d", &row);

    printf("ENTER COLOUMN LIMIT:\n");
    scanf("%d", &col);

    printf("ENTER YOUR MATRIX:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    printf("YOUR MATRIX LOOK AS:\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf(" %d", num[i][j]);
        }
    }
    printf("\n.......................................\n");

    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + num[i][j];
        }
        printf("SUM OF %d ROW IS: %d\n", i + 1, sum);
    }
      printf("\n.......................................\n");


    return (0);
}