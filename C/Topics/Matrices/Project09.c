//** Sum of the lower triangular matrix.

#include <stdio.h>
#define colu 10

int find_sum(int num[][colu], int row, int col)
{
    int sum = 0, temp = 1, res_temp;
    for (int i = 0; i < row; i++)
    {
        res_temp = temp;
        while (temp < col)
        {
            num[i][temp] = 0;
            temp++;
        }

        temp = res_temp;

        printf("\n");
        for (int j = 0; j < col; j++)
        {
            sum += num[i][j];
            printf("%d ", num[i][j]);
        }

        temp++;
    }

    return (sum);
}

int main()
{
    int num[10][colu], row, col;
    int sum = 0;

    printf("ENTER ROW LIMIT:\n");
    scanf("%d", &row);

    printf("ENTER COLUMN LIMIT:\n");
    scanf("%d", &col);

    printf("ENTER YOUR MATRIX: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    sum = find_sum(num, row, col);

    printf("\nSUM: %d\n", sum);

    return (0);
}