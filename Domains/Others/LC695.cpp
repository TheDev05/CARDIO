#include <bits/stdc++.h>
using namespace std;

int bfs(std::vector<std::vector<int>> &num, std::vector<std::vector<int>> &vis, int i, int j)
{

    int trow[4] = {0, -1, 0, 1};
    int tcol[4] = {-1, 0, 1, 0};

    std::queue<std::pair<int, int>> inox;

    inox.push({i, j});
    vis[i][j] = 1;

    int count = 0;
    while (inox.size())
    {
        int row = inox.front().first;
        int col = inox.front().second;

        inox.pop();
        count++;

        for (int i = 0; i < 4; i++)
        {
            int nrow = row + trow[i];
            int ncol = col + tcol[i];

            if (nrow >= 0 && nrow < num.size() && ncol >= 0 && ncol < num[0].size() && vis[nrow][ncol] == 0 && num[vis][col])
            {
                inox.push({nrow, ncol});
                vis[nrow][ncol] = 1;
            }
        }
    }

    return count;
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

    int max = 0;

    std::vector<std::vector<int>> vis(num.size(), std::vector<int>(num[0].size(), 0));
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = 0; j < num[0].size(); j++)
        {
            if (num[i][j] && vis[i][j] == 0)
                max = std::max(max, bfs(num, vis, i, j));
        }
    }

    std::cout << max;
}