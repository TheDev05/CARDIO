#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<std::vector<char>> &num, std::vector<std::vector<int>> &vis, int row, int col)
{
    int r[4] = {0, 0, -1, 1};
    int c[4] = {-1, 1, 0, 0};

    vis[row][col] = 1;
    for (int i = 0; i < 4; i++)
    {
        int trow = row + r[i];
        int tcol = col + c[i];

        if (trow >= 0 && trow < num.size() && tcol >= 0 && tcol < num[0].size() && num[trow][tcol] == 'X' && vis[trow][tcol] == 0)
            traverse(num, vis, trow, tcol);
    }

    return 0;
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<char>> num;
    for (int i = 0; i < n; i++)
    {
        std::vector<char> temp(m);
        for (auto &j : temp)
            std::cin >> j;

        num.push_back(temp);
    }

    std::vector<std::vector<int>> vis(n, std::vector<int>(m, 0));

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (num[i][j] == 'X' && vis[i][j] == 0)
            {
                count++;
                traverse(num, vis, i, j);
            }
        }
    }

    std::cout << count;
}