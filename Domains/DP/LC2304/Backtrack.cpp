#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<std::vector<int>> &num, std::vector<std::vector<int>> &cost, int i, int j)
{
    if (i >= num.size())
        return 0;

    int min = INT_MAX;
    for (int col = 0; col < num[0].size(); col++)
    {
        if (i + 1 < num.size())
            min = std::min(min, cost[num[i][j]][col] + traverse(num, cost, i + 1, col));
    }

    if (min == INT_MAX)
        min = 0;

    return min + num[i][j];
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

    int p, q;
    std::cin >> p >> q;

    std::vector<std::vector<int>> cost;
    for (int i = 0; i < p; i++)
    {
        std::vector<int> temp(q);
        for (auto &j : temp)
            std::cin >> j;

        cost.push_back(temp);
    }

    int min = INT_MAX;
    for (int i = 0; i < num[0].size(); i++)
    {
        min = std::min(min, traverse(num, cost, 0, i));
    }

    std::cout << min;
}