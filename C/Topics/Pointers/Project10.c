//**Multiply two matrix using pointers.
//! INCOMPLETE: MATRIX MUNTIPLICATION PART ONLY.

#include <stdio.h>
int col = 2;
void muntiply(int num1[][col], int num2[][col], int mun[][col], int row);
// void setup_map(int map[ROWS][COLS]);
// void setup_map(int map[][COLS]);
// void setup_map(int (*map)[COLS]);this all is correct protype dec for 2d array.

int main()
{
    int num1[10][col], num2[10][col], mun[10][col];
    int row;

    printf("ENTER ROW LIMIT:\n");
    scanf("%d", &row);

    printf("ENTER YOUR FIRST ARRAY:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num1[i][j]);
        }
    }

    printf("ENTER YOUR SECOND ARRAY:\n");
    for (int i = 0; i < row; i++)
    {printf("\n");
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &num2[i][j]);
        }
    }

    muntiply(num1, num2, mun, row);

    printf("OUTPUT:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", mun[i][j]);
        }
    }

    return (0);
}

void muntiply(int num1[][col], int num2[][col], int mun[][col], int row)
{
    int r;
    for (int i = 0; i < row; i++)
    {
        r = 0;
        // c = 0;
        for (int j = 0; j < col; j++)
        {
            mun[i][j] = num1[i][j] * num2[r][i]+num1[i][j+1] * num2[r+1][i];
            r++;
            // c++;
        }
    }
}