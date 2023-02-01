#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<int> days(n), costs(m);
    for (int i = 0; i < n; i++)
    {
        std::cin >> days[i];
    }

    for (int i = 0; i < m; i++)
    {
        std::cin >> costs[i];
    }

    std::vector<std::vector<int>> storage(n + 1, std::vector<int>(366, 0));
    for (int i = storage.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j < storage[0].size(); j++)
        {
            int val1 = costs[0], val2 = costs[1], val3 = costs[2];
            if (days[i] < j)
                storage[i][j] = storage[i + 1][j];
            else
            {
                if (days[i] + 1 < 366)
                    val1 += storage[i + 1][days[i] + 1];
                if (days[i] + 7 < 366)
                    val2 += storage[i + 1][days[i] + 7];
                if (days[i] + 30 < 366)
                    val3 += storage[i + 1][days[i] + 30];

                storage[i][j] = std::min({val1, val2, val3});
            }
        }
    }

    std::cout << storage[0][0];
}