#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> grid(n, std::vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> grid[i][j];
        }
    }

    std::queue<std::pair<int, int>> qt;
    std::vector<std::vector<int>> vis(n, std::vector<int>(n, 0));

    qt.push({0, 0});
    vis[0][0] = 1;

    int dx[4] = {2, -2, 1, -1};
    int dy[4] = {-1, 1, 2, -2};

    while (qt.size())
    {
        auto it = qt.front();
        qt.pop();

        int row = it.first;
        int col = it.second;

        bool ok = true;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (abs(dx[i]) != abs(dy[j]))
                {
                    int trow = row + dx[i];
                    int tcol = col + dy[j];

                    if (trow >= 0 && trow < n && tcol >= 0 && tcol < n && grid[trow][tcol] == 1 + grid[row][col] && vis[trow][tcol] == 0)
                    {
                        qt.push({trow, tcol});
                        vis[trow][tcol] = 1;

                        ok = false;
                    }
                }
            }
        }

        if (ok)
            return false;
    }

    return true;
}