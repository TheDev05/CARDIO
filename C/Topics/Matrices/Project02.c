//**Sum of the main diagonal elements of a matrix.
//**20.02.2021

#include <stdio.h>
int main()
{
    int num[20][20], row, col;
    int sum = 0;

    printf("ENTER YOUR ROW LIMIT:\n");
    scanf("%d", &row);

    printf("ENTER COLOUMN LIMIT:\n");
    scanf("%d", &col);

    printf("ENTER YOUR NUMBERS:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    printf("YOUR MATRIX LOOK LIKE AS:\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf(" %d", num[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum = sum + num[i][j];
            }
        }
    }

    printf("\n\nSUM OF ITS DIAGONAL ELEMENTS: %d\n\n", sum);
    return (0);
}