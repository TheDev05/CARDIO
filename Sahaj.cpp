#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    int target_size;
    std::cin >> target_size;

    std::vector<char> target(target_size);
    for (auto &j : target)
        std::cin >> j;

    std::vector<int> col(target_size);
    for (auto &j : col)
        std::cin >> j;

    int rowPointer_size;
    std::cin >> rowPointer_size;

    std::vector<int> rowPointer(rowPointer_size);
    for (auto &i : rowPointer)
        std::cin >> i;

    std::vector<std::vector<char>> res(n, std::vector<char>(m, 'z'));
    for (int i = 0; i < rowPointer.size() - 1; i++)
    {
        for (int j = rowPointer[i]; j < rowPointer[i + 1]; j++)
        {
            res[i][col[j]] = target[j];
        }
    }

    for (auto i : res)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}