//** Access two-dimensional array using pointers.
// **lets say add second row of matrix using pointer.

#include <stdio.h>
int col = 4;//? for passing 2d array we have to globally initialize one dimension ither row or coloumn.

int add(int num[][20],int);

int main()
{
    int num[20][col];
    int row, sum;

    printf("ENTER ROW LIMIT:\n");
    scanf("%d", &row);

    // printf("ENTER COLOUMN LIMIT:\n");
    // scanf("%d", &col);

    printf("ENTER YOUR MATRIX:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    sum = add(num,row);

    printf("SUM: %d\n", sum);

    return (0);
}

int add(int num[][col],int row)
{
    int temp = 0;

    for (int i = 0; i < col; i++)
    {
        temp = temp + num[1][i];
        
    }
    printf("TEMP: %d\n", temp);
    return (temp);
}
