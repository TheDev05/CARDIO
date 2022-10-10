//**Find determinant of a matrix.
//! **INCOMPLETE**

#include <stdio.h>
#define colu 10

int find_det(int num[][colu])
{
    for (int i = 0; i < col; i++)
    {
        int temp = num[0][i];
        for (int j = 0; j < col; j++)
        {
        }
    }
}

int main()
{
    int num[3][colu];
    int det;

    printf("ENTER YOUR 3*3 MATRIX:\n");
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    det = find_det(num);

    printf("DETERMINANT: %d\n", det);

    return (0);
}