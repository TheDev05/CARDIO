#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<std::vector<int>> &num, int i, int j)
{
    int r[4] = {0, 0, -1, 1};
    int c[4] = {-1, 1, 0, 0};

    int temp = num[i][j];
    num[i][j] = -1;

    for (int i = 0; i < 4; i++)
    {
        int row = r[i] + i;
        int col = c[i] + j;

        if (row < num.size() && col < num[0].size() && num[row][col] != -1)
        {
            
        }
    }

    num[i][j] = temp;
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> num(n, std::vector<int>(m, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    traverse(num, 0, 0);
}