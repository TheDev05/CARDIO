#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<std::vector<int>> &num, std::vector<std::vector<int>> &storage, int col, int index)
{
    if (col >= num[0].size())
        return 0;

    for (int i = col; i < num[0].size(); i++)
    {
        int max = 0;
        for (int row = 0; row < 3; row++)
        {
            if (col != 0 && i == col)
            {
                if (row != index)
                {
                    if (storage[row][col] == -1)
                        storage[row][col] = num[row][col] + getCount(num, storage, i + 1, row);
                    max = std::max(max, storage[row][col]);
                }
            }
            else
            {
                if (storage[row][col] == -1)
                    storage[row][col] = num[row][col] + getCount(num, storage, i + 1, row);
                max = std::max(max, storage[row][col]);
            }
        }

        return max;
    }

    return 0;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < 3; i++)
    {
        std::vector<int> temp(n);
        for (int j = 0; j < n; j++)
        {
            std::cin >> temp[j];
        }

        num.push_back(temp);
    }

    std::vector<std::vector<int>> temp;
    for (int j = 0; j < num[0].size(); j++)
    {
        std::vector<int> demo;
        for (int i = 0; i < n; i++)
        {
            demo.push_back(num[i][j]);
        }

        temp.push_back(demo);
    }

    std::vector<std::vector<int>> storage(3, std::vector<int>(n, -1));
    std::cout << getCount(temp, storage, 0, 0) << '\n';

    for (auto i : storage)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}