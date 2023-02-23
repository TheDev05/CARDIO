#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<std::vector<int>> &num, std::vector<std::vector<int>> &storage, int row, int col)
{
    if (row == num.size() - 1 && col == num[0].size() - 1)
        return num[row][col];
    if (row >= num.size() || col >= num[0].size())
        return 1e5;

    if (storage[row][col] == -1)
    {
        int val1 = 1e5, val2 = 1e5;
        val1 = num[row][col] + traverse(num, storage, row + 1, col);
        val2 = num[row][col] + traverse(num, storage, row, col + 1);

        storage[row][col] = std::min(val1, val2);
    }

    return storage[row][col];
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < n; i++)
    {
        std::vector<int> temp(m);
        for (int j = 0; j < m; j++)
        {
            std::cin >> temp[j];
        }

        num.push_back(temp);
    }

    std::vector<std::vector<int>> storage(num.size(), std::vector<int>(num[0].size(), -1));
    std::cout << traverse(num, storage, 0, 0);
}