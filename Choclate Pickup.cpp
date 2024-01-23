#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> num(n, std::vector<int>(m, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    std::vector<std::vector<int>> res;
    res = num;

    std::vector<int> first(m, 0), second(m, 0);
    second = num[n - 1];

    for (int i = num.size() - 2; i >= 0; i--)
    {
        for (int j = num[0].size() - 1; j >= 0; j--)
        {
            int val1 = 0, val2 = 0, val3 = 0;
            if (j - 1 >= 0)
                val1 = second[j - 1];
            if (j + 1 < num[0].size())
                val3 = second[j + 1];
            val2 = second[j];

            first[j] = num[i][j] + std::max({val1, val2, val3});
            num[i][j] = first[j];
        }

        second = first;
    }

    int sum = first[0];

    int row = 0, col = 0;
    while (row >= 0 && row < n && col >= 0 && col < m)
    {
        num[row++][col] = 0;

        if (row >= n)
            break;

        int val1 = 0, val2 = 0, val3 = 0;
        if (col - 1 >= 0)
            val1 = num[row][col - 1];
        if (col + 1 < num[0].size())
            val3 = num[row][col + 1];
        val2 = num[row][col];

        if (val1 > std::max(val2, val3))
            col--;
        else if (val3 > std::max(val1, val2))
            col++;
    }

    for (auto i : num)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }

    num = res;

    second = num[n - 1];
    for (int i = num.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            int val1 = 0, val2 = 0, val3 = 0;
            if (j - 1 >= 0)
                val1 = second[j - 1];
            if (j + 1 < num[0].size())
                val3 = second[j + 1];
            val2 = second[j];

            first[j] = num[i][j] + std::max({val1, val2, val3});
        }

        second = first;
    }

    std::cout << sum + first[m - 1];
}