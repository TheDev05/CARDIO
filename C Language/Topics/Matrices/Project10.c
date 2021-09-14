//**Find the sum of a upper triangular matrix.

#include <stdio.h>
#define colu 10

int find_sum(int num[][colu], int row, int col)
{
    int sum = 0, p = 0, temp = 0;

    for (int i = 0; i < row; i++)
    {
        p = 0;
        while (p < temp)
        {
            num[i][p] = 0;
            p++;
        }

        printf("\n");
        for (int j = 0; j < col; j++)
        {
            printf("%d ", num[i][j]);
            sum += num[i][j];
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

    sum = find_sum(num, row, col);

    printf("\nSUM: %d\n", sum);

    return (0);
}