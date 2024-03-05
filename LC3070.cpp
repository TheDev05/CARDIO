#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> num(n, std::vector<int>(m, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    int k;
    std::cin >> k;

    int row = 0, col = 0;
    int count = 0;

    // [[1,10],[7,2],[9,1],[4,1]]

    std::vector<std::vector<int>> temp(num.size(), std::vector<int>(num[0].size(), 0));
    for (int i = 0; i < num.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < num[0].size(); j++)
        {
            sum += num[i][j];

            int local = sum;
            if (i)
                local += temp[i - 1][j];

            if (local <= k)
                count++;

            temp[i][j] = local;
        }
    }

    for (auto i : temp)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }

    std::cout << count;
}