#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<std::vector<int>> &num, std::vector<std::vector<int>> &storage, int i, int j)
{
    if (num[i][j] == -1)
        return 1e4;

    if (storage[i][j] != -1)
        return storage[i][j];

    if (num[i][j] == 0)
    {
        storage[i][j] = 1;
        return 1;
    }

    int temp = num[i][j], inox = 0;
    num[i][j] = -1;

    int val1 = 1e4, val2 = 1e4;
    int val3 = 1e4, val4 = 1e4;

    if (i + 1 < num.size())
    {
        inox = traverse(num, storage, i + 1, j);
        val1 = inox;
    }

    if (i - 1 >= 0)
    {
        inox = traverse(num, storage, i - 1, j);
        val2 = inox;
    }

    if (j - 1 >= 0)
    {
        inox = traverse(num, storage, i, j - 1);
        val3 = inox;
    }

    if (j + 1 < num[0].size())
    {
        inox = traverse(num, storage, i, j + 1);
        val4 = inox;
    }

    num[i][j] = temp;

    storage[i][j] = 1 + std::min({val1, val2, val3, val4});
    return storage[i][j];
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < n; i++)
    {
        std::vector<int> temp(m);
        for (auto &j : temp)
            std::cin >> j;

        num.push_back(temp);
    }

    std::vector<std::vector<int>> storage(num.size(), std::vector<int>(num[0].size(), -1));
    std::vector<std::vector<int>> result(num.size(), std::vector<int>(num[0].size(), -1));

    for (int i = 0; i < num.size(); i++)
    {
        for (int j = 0; j < num[0].size(); j++)
        {
            if (storage[i][j] == -1)
                traverse(num, storage, i, j);
            result[i][j] = storage[i][j] - 1;
        }
    }

    for (auto i : result)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}