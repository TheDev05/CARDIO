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

    for (auto &i : num)
        for (auto &j : i)
            if (j)
                j = -1; 

    std::vector<int> first(m, 0), second(m, 0);
    second[m - 1] = 1;

    for (int i = num.size() - 1; i >= 0; i--)
    {
        for (int j = num[0].size() - 1; j >= 0; j--)
        {
            if (num[i][j] == -1)
            {
                first[j] = -1;
                continue;
            }

            long long val1 = 0, val2 = 0;
            if (j + 1 < num[0].size() && num[i][j + 1] != -1)
                val1 = first[j + 1];

            if (second[j] != -1)
                val2 = second[j];

            first[j] = val1 + val2;
        }

        second = first;
    }

    std::cout << first[0];
}