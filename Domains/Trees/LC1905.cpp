#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> num1, num2;
    for (int i = 0; i < n; i++)
    {
        std::vector<int> temp(m);
        for (auto &j : temp)
            std::cin >> j;

        num1.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        std::vector<int> temp(m);
        for (auto &j : temp)
            std::cin >> j;

        num2.push_back(temp);
    }

    std::vector<std::pair<int, int>> inox;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (num2[i][j] && num1[i][j])
                inox.push_back({i, j});
        }
    }

    std::vector<std::vector<int>> visited(n, std::vector<int>(m, 0));
    std::queue<std::pair<int, int>> store;

    int r[4] = {-1, 1, 0, 0};
    int c[4] = {0, 0, -1, 1};

    int count = 0;
    for (int i = 0; i < inox.size(); i++)
    {
        int row = inox[i].first;
        int col = inox[i].second;

        if (visited[row][col] == 0)
        {
            visited[row][col] = 1;
            store.push({row, col});

            bool ok = true;
            while (store.size())
            {
                int nrow = store.front().first;
                int ncol = store.front().second;

                store.pop();
                if (num1[nrow][ncol] == 0)
                    ok = false;

                for (int j = 0; j < 4; j++)
                {
                    int trow = nrow + r[j];
                    int tcol = ncol + c[j];

                    if (trow >= 0 && trow < n && tcol >= 0 && tcol < m && visited[trow][tcol] == 0 && num2[trow][tcol])
                    {
                        visited[trow][tcol] = 1;
                        store.push({trow, tcol});
                    }
                }
            }

            if (ok)
                count++;
        }
    }

    std::cout << count;
}