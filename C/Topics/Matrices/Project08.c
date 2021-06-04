//**Find a upper triangular matrix

#include <stdio.h>
#define colu 10
void show(int num[][colu], int, int);

int main()
{
    int num[10][colu];
    int row, col;

    printf("ENTER ROW LIMIT: \n");
    scanf("%d", &row);

    printf("ENTER COLUMN LIMIT:\n");
    scanf("%d", &col);

    printf("ENTER YOUR NUMBERS:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    show(num, row, col);

    return (0);
}

void show(int num[][colu], int row, int col)
{
    int temp = 0, res_temp;
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf("%d ", num[i][j]);
        }
        temp++;
        res_temp = temp;

        while (temp >= 0)
        {
            num[i + 1][temp - 1] = 0;
            temp--;
        }
        temp = res_temp;
    }
}