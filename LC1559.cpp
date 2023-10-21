#include <bits/stdc++.h>
using namespace std;

bool traverse(std::vector<std::vector<char>> &num, std::vector<std::vector<int>> &vis, int row, int col)
{
    vis[row][col] = 1;

    int r[4] = {0, 0, -1, 1};
    int c[4] = {-1, 1, 0, 0};

    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        int trow = row + r[i];
        int tcol = col + c[i];

        if (trow >= 0 && trow < num.size() && tcol >= 0 && tcol < num[0].size() && num[trow][tcol] == num[row][col])
        {
            if (vis[trow][tcol])
                count++;
            else if (traverse(num, vis, trow, tcol))
                return true;
        }
    }

    if (count > 1)
        return true;

    return false;
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<char>> num(n, std::vector<char>(m, 'x'));
    for (int i = 0; i < n; i++)
    {
        for (auto &j : num[i])
            std::cin >> j;
    }

    std::vector<std::vector<int>> vis(n, std::vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j] == 0)
            {
                if (traverse(num, vis, i, j))
                    std::cout << "Yes\n";
            }
        }
    }

    std::cout << "No\n";
}