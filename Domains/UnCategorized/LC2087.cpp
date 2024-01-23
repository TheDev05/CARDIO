#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<int> start(2, 0), end(2, 0);

    for (auto &i : start)
        std::cin >> i;
    for (auto &i : end)
        std::cin >> i;

    std::vector<int> row(n), col(m);
    for (auto &i : row)
        std::cin >> i;
    for (auto &i : col)
        std::cin >> i;

    int minRow = std::min(start[0], end[0]);
    int maxRow = std::max(start[0], end[0]);

    int sum = 0;
    for (int i = minRow + 1; i <= maxRow; i++)
        sum += row[i];

    int minCol = std::min(start[1], end[1]);
    int maxCol = std::max(start[1], end[1]);

    for (int i = minCol + 1; i <= maxCol; i++)
        sum += col[i];

    std::cout << sum;
}