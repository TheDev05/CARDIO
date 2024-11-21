#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    int g;
    std::cin >> g;

    int w;
    std::cin >> w;

    std::vector<std::vector<int>> guards(g, std::vector<int>(2, 0));
    std::vector<std::vector<int>> walls(w, std::vector<int>(2, 0));

    for (auto &i : guards)
        for (auto &j : i)
            std::cin >> j;

    for (auto &i : walls)
        for (auto &j : i)
            std::cin >> j;

    std::vector<std::vector<int>> visit(n, std::vector<int>(m, 0));
    for (auto i : guards)
        visit[i[0]][i[1]] = 1;
    for (auto i : walls)
        visit[i[0]][i[1]] = 2;

    for (int i = 0; i < guards.size(); i++)
    {
        int row = guards[i][0];
        int col = guards[i][1];

        if (visit[row][col])
        {
            int trow = row;
            int tcol = col;

            visit[row][col] = 0;
            while (col >= 0 && visit[row][col] != 2)
            {
                visit[row][col] = 1;
                col--;
            }

            row = trow;
            col = tcol;

            visit[row][col] = 0;
            while (col < m && visit[row][col] != 2)
            {
                visit[row][col] = 1;
                col++;
            }

            row = trow;
            col = tcol;

            visit[row][col] = 0;
            while (row >= 0 && visit[row][col] != 2)
            {
                visit[row][col] = 1;
                row--;
            }

            row = trow;
            col = tcol;

            visit[row][col] = 0;
            while (row < n && visit[row][col] != 2)
            {
                visit[row][col] = 1;
                row++;
            }

            row = trow;
            col = tcol;

            visit[row][col] = 1;
        }
    }

    int count = 0;
    for (int i = 0; i < visit.size(); i++)
    {
        for (int j = 0; j < visit[i].size(); j++)
        {
            if (visit[i][j])
                count++;
        }
    }

    std::cout << (n * m) - count;
}