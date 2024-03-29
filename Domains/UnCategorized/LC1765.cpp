#include <bits/stdc++.h>
using namespace std;

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

    std::queue<std::pair<int, int>> inox;
    std::vector<std::vector<int>> dist(n, std::vector<int>(m, -1));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (num[i][j])
            {
                dist[i][j] = 0;
                inox.push({i, j});
            }
        }
    }

    int r[4] = {0, 0, -1, 1};
    int c[4] = {1, -1, 0, 0};

    while (inox.size())
    {
        auto it = inox.front();
        inox.pop();

        int row = it.first;
        int col = it.second;

        for (int i = 0; i < 4; i++)
        {
            int trow = row + r[i];
            int tcol = col + c[i];

            if (trow >= 0 && trow < n && tcol >= 0 && tcol < m && dist[trow][tcol] == -1)
            {
                inox.push({trow, tcol});
                dist[trow][tcol] = dist[row][col] + 1;
            }
        }
    }

    for (auto i : dist)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}