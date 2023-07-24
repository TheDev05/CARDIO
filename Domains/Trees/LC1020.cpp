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

    std::vector<std::vector<int>> vis(n, std::vector<int>(m, 0));

    int r[4] = {0, 0, -1, 1};
    int c[4] = {1, -1, 0, 0};

    int result = 0;
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = 0; j < num[0].size(); j++)
        {
            if (vis[i][j] == 0 && num[i][j])
            {
                std::queue<std::pair<int, int>> store;

                store.push({i, j});
                vis[i][j] = 1;

                bool ok = true;
                int count = 0;

                while (store.size())
                {
                    int row = store.front().first;
                    int col = store.front().second;

                    store.pop();

                    if (row == 0 || col == 0 || row == num.size() - 1 || col == num[0].size() - 1)
                        ok = false;
                    count++;

                    for (int p = 0; p < 4; p++)
                    {
                        int nrow = row + r[p];
                        int ncol = col + c[p];

                        if (nrow >= 0 && ncol >= 0 && nrow < num.size() && ncol < num[0].size() && num[nrow][ncol] && vis[nrow][ncol] == 0)
                        {
                            vis[nrow][ncol] = 1;
                            store.push({nrow, ncol});
                        }
                    }
                }

                if (ok)
                    result += count;
            }
        }
    }

    std::cout << result;
}