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

    int left, right;
    std::cin >> left >> right;

    int color;
    std::cin >> color;

    std::queue<std::pair<int, int>> inox;
    std::vector<std::vector<int>> vis(n, std::vector<int>(m, 0)), res;
    res = num;

    inox.push({left, right});
    vis[left][right] = 1;

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    while (inox.size())
    {
        auto local = inox.front();
        inox.pop();

        int row = local.first;
        int col = local.second;

        bool ok1 = false, ok2 = false;
        for (int i = 0; i < 4; i++)
        {
            int trow = row + dx[i];
            int tcol = col + dy[i];

            if (trow >= 0 && trow < n && tcol >= 0 && tcol < m)
            {
                if (num[row][col] == num[trow][tcol])
                {
                    if (vis[trow][tcol] == 0)
                    {
                        inox.push({trow, tcol});
                        vis[trow][tcol] = 1;
                    }
                }
                else
                    ok2 = true;
            }
            else
                ok1 = true;
        }

        if (ok1 || ok2)
            res[row][col] = color;
    }

    for (auto i : res)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}