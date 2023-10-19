#include <bits/stdc++.h>
using namespace std;

std::vector<std::vector<int>> traverse(std::vector<std::vector<int>> &num, std::vector<std::vector<int>> &vis, bool ok)
{
    int r[4] = {-1, 1, 0, 0};
    int c[4] = {0, 0, -1, 1};

    int index1 = 0, index2 = 0;
    if (ok == false)
        index1 = num.size() - 1, index2 = num[0].size() - 1;

    std::queue<std::pair<int, int>> inox;
    std::vector<std::vector<int>> res;

    for (int i = 0; i < num.size(); i++)
    {
        for (int j = 0; j < num[0].size(); j++)
        {
            if ((i == index1 || j == index2))
            {
                inox.push({i, j});
            }
        }
    }

    while (inox.size())
    {
        auto node = inox.front();
        inox.pop();

        int row = node.first;
        int col = node.second;

        if (ok == false)
        {
            if (vis[row][col] == 1)
                res.push_back({row, col});
            vis[row][col] = 2;
        }
        else
            vis[row][col] = 1;

        for (int k = 0; k < 4; k++)
        {
            int trow = r[k] + row;
            int tcol = c[k] + col;

            if (trow >= 0 && trow < num.size() && tcol >= 0 && tcol < num[0].size() && num[trow][tcol] >= num[row][col])
            {
                if (ok == false && vis[trow][tcol] != 2)
                    inox.push({trow, tcol});
                else if (vis[trow][tcol] == 0)
                    inox.push({trow, tcol});
            }
        }
    }

    return res;
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> num(n, std::vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (auto &j : num[i])
            std::cin >> j;
    }

    std::vector<std::vector<int>> vis(n, std::vector<int>(m, 0));
    traverse(num, vis, true);
    std::vector<std::vector<int>> res = traverse(num, vis, false);

    for (auto i : res)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}