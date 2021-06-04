//** The lower triangular matrix.

#include <stdio.h>
#define col 10
void show_triaMatrix(int p[][col], int, int);

int main()
{
    int num[10][col];
    int row, colu;

    printf("ENTER YOUR ROW LIMIT: \n");
    scanf("%d", &row);

    printf("ENTER YOUR COLOUMN LIMIT: \n");
    scanf("%d", &colu);

    printf("ENTER YOUR MATRIX: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colu; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    show_triaMatrix(num, row, colu);

    return (0);
}

void show_triaMatrix(int num[][col], int row, int colu)
{
    int temp = 1, res_temp;

    for (int i = 0; i < row; i++)
    {
        res_temp = temp;

        while (temp < colu)
        {
            num[i][temp] = 0;
            temp++;
        }

        temp = res_temp;
        int j = 0;

        printf("\n");
        for (j; j < colu; j++)
        {
            printf("%d ", num[i][j]);
        }

        temp++;
    }
}