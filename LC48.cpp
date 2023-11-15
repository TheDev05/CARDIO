#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(n, 0));
    for (auto &i : num)
    {
        for (auto &j : i)
            std::cin >> j;
    }

    for (int i = 0; i < ceil((double)num.size() / 2); i++)
    {
        int topLeft_row = i, topLeft_col = i;
        int topRight_row = i, topRight_col = num.size() - 1 - i;

        int bottomLeft_row = num.size() - 1 - i,
            bottomLeft_col = i;

        int bottomRight_row = num.size() - 1 - i,
            bottomRight_col = num.size() - 1 - i;

        for (int j = 0; j < (num.size() - (i * 2) - 1); j++)
        {
            int temp1 = num[topLeft_row][topLeft_col + j];
            int temp2 = num[topRight_row + j][topRight_col];

            int temp3 = num[bottomRight_row][bottomRight_col - j];
            int temp4 = num[bottomLeft_row - j][bottomLeft_col];

            num[topLeft_row][topLeft_col + j] = temp4;
            num[topRight_row + j][topRight_col] = temp1;
            num[bottomRight_row][bottomRight_col - j] = temp2;
            num[bottomLeft_row - j][bottomLeft_col] = temp3;
        }
    }

    for (auto i : num)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}