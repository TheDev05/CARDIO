#include <bits/stdc++.h>
using namespace std;

bool traverse(auto num, auto vis, int i, int j, int target_row, int target_col)
{
    if (i == target_row && j == target_col)
        return 1;

    vis[i][j] = 1;

    int r[4] = {0, 0, -1, 1};
    int c[4] = {-1, 1, 0, 0};

    for (int k = 0; k < 4; k++)
    {
        int row = i + r[k];
        int col = j + c[k];

        if (row >= 0 && row < num.size() && col >= 0 && col < num[0].size() && vis[row][col] == 0 && num[row][col])
            if (traverse(num, vis, row, col, target_row, target_col))
                return true;
    }

    return false;
}

int main()
{
    int n;
    std::cin >> n;

    // initialising matrix/ maze
    std::vector<std::vector<int>> num(n, std::vector<int>(n, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    int source_row, source_col;
    int target_row, target_col;

    // Enter source and target indices
    std::cin >> source_row >> source_col;
    std::cin >> target_row >> target_col;

    // assuming 1 for path, 0 for any obstacles
    std::vector<std::vector<int>> vis(n, std::vector<int>(n, 0));

    if (target_row == source_row && target_col == source_col)
        std::cout << "FOUND PATH\n";
    else if (num[target_row][target_col] == 0 || num[source_row][source_col] == 0)
        std::cout << "FOUND NOT PATH\n";
    else if (traverse(num, vis, source_row, source_col, target_row, target_col))
        std::cout << "FOUND PATH\n";
    else
        std::cout << "FOUND NOT PATH\n";
}