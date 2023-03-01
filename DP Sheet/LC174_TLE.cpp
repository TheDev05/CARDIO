#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<std::vector<int>> &num, std::vector<std::vector<std::vector<int>>> &storage, int temp, int i, int j)
{
    if (i >= num.size() || j >= num[0].size())
        return 1e5;

    int res = temp;
    if (storage[i][j][temp] == -1)
    {
        int val1 = 1e5, val2 = 1e5, delta = 0;
        if (num[i][j] <= 0 && abs(num[i][j]) >= temp)
        {
            delta = (abs(num[i][j]) - temp) + 1;
            temp += delta;
        }
        else if (temp == 0)
            temp = delta = 1;

        if (i == num.size() - 1 && j == num[0].size() - 1)
            storage[i][j][res] = delta;
        else
        {
            val1 = traverse(num, storage, temp + num[i][j], i + 1, j);
            val2 = traverse(num, storage, temp + num[i][j], i, j + 1);

            storage[i][j][res] = delta + std::min(val1, val2);
        }
    }

    return storage[i][j][res];
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

    int sum = 0;
    for (auto i : num)
        for (auto j : i)
            sum += abs(j);

    std::vector<std::vector<std::vector<int>>> storage(num.size(), std::vector<std::vector<int>>(num[0].size(), std::vector<int>(sum, -1)));
    std::cout << traverse(num, storage, 0, 0, 0);

    // std::cout << '\n';
    // for (auto i : local)
    // {
    //     for (auto j : i)
    //         std::cout << j << " ";
    //     std::cout << '\n';
    // }
}