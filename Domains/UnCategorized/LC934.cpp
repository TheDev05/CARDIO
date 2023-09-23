#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < n; i++)
    {
        std::vector<int> temp(n);
        for (auto &j : temp)
            std::cin >> j;

        num.push_back(temp);
    }

    std::queue<std::pair<int, int>> inox;
    std::vector<std::vector<int>> vis(num.size(), std::vector<int>(num[0].size(), 0));

    for (int i = 0; i < num.size(); i++)
    {
        for (int j = 0; j < num[0].size(); j++)
        {
            if (num[i][j])
            {
                inox.push({i, j});
                vis[i][j] = 1;

                break;
            }
        }

        if (inox.size())
            break;
    }

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    std::queue<std::pair<std::pair<int, int>, int>> temp;

    while (inox.size())
    {
        auto it = inox.front();
        inox.pop();

        int row = it.first;
        int col = it.second;

        for (int i = 0; i < 4; i++)
        {
            int trow = row + dx[i];
            int tcol = col + dy[i];

            if (trow >= 0 && trow < num.size() && tcol >= 0 && tcol < num[0].size())
            {
                if (vis[trow][tcol] == 0 && num[trow][tcol])
                {
                    vis[trow][tcol] = 1;
                    inox.push({trow, tcol});
                }

                if (num[trow][tcol] == 0)
                    temp.push({{trow, tcol}, 0});
            }
        }
    }

    int min = INT_MAX;
    while (temp.size())
    {
        auto it = temp.front();
        temp.pop();

        int row = it.first.first;
        int col = it.first.second;

        int dist = it.second;

        if (num[row][col])
            min = std::min(min, dist);

        for (int i = 0; i < 4; i++)
        {
            int trow = row + dx[i];
            int tcol = col + dy[i];

            if (trow >= 0 && trow < num.size() && tcol >= 0 && tcol < num[0].size() && vis[trow][tcol] == 0)
            {
                vis[trow][tcol] = 1;
                temp.push({{trow, tcol}, dist + 1});
            }
        }
    }

    std::cout << min;
}