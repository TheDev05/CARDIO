#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (auto &j : num[i])
            std::cin >> j;
    }

    std::queue<std::pair<int, int>> inox;
    std::vector<std::vector<int>> dist(n, std::vector<int>(n, INT_MAX));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (num[i][j])
                dist[i][j] = 0, inox.push({i, j});
        }
    }

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    int max = 0;
    while (inox.size())
    {
        auto local = inox.front();
        inox.pop();

        for (int i = 0; i < 4; i++)
        {
            int row = dx[i] + local.first;
            int col = dy[i] + local.second;

            if (row >= 0 && row < n && col >= 0 && col < n && dist[row][col] == INT_MAX)
            {
                inox.push({row, col});
                dist[row][col] = std::min(1 + dist[local.first][local.second], dist[row][col]);
            }
        }

        max = std::max(max, dist[local.first][local.second]);
    }

    std::cout << max;
}