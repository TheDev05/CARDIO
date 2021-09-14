//**C Program To Find Row In An Array That Includes The Greatest Amount Of Even Number
//** REVISON REQUIRED.

#include <iostream>
#define size_col 20

int find_greatest(int num[][size_col], int, int);

int main()
{
    int num[20][size_col], row, col, req_row;

    std::cout << "ENTER YOUR ROW AND COLOUMN LIMIT: " << std::endl;
    std::cin >> row >> col;

    std::cout << "ENTER YOUR NUMBERS: " << std::endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> num[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << "ROW CONTAINIG LARGEST EVEN VALUE IS: " << find_greatest(num, row, col) << std::endl;
    return (0);
}

int find_greatest(int num[][size_col], int row, int col)
{
    int temp = -1, index;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (num[i][j] % 2 == 0 && temp < num[i][j])
            {
                temp = num[i][j];
                index = i;
            }
        }
    }

    return (index);
}