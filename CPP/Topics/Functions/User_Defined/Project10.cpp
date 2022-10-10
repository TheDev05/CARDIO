//**C program to pass two dimensional array (Two-D array) to a function.

#include <iostream>
#define colu 10

int get_sum(int num[][colu], int row, int col)
{
    int sum = 0;
    int j = 0, res_j;

    for (int i = 0; i < row; i++)
    {
        res_j = j;

        for (j; j < col; j++)
        {
            sum += num[i][j];
        }

        j = res_j;
        j++;
    }

    return (sum);
}

int main()

{
    int num[10][colu];
    int row, col;

    std::cout << "ENTER ROW AND THEN COLOUMN LIMIT: " << std::endl;
    std::cin >> row >> col;

    std::cout << "ENTER YOUR MATRIX: " << std::endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> num[i][j];
        }
    }

    int sum_of_uppertraingle = get_sum(num, row, col);

    std::cout << "SUM OF UPPER TRAINLE: " << sum_of_uppertraingle << std::endl;

    return (0);
}