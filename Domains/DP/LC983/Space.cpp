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

    std::vector<int> prev(366, 0);
    for (int i = days.size() - 1; i >= 0; i--)
    {
        for (int j = 365; j >= 0; j--)
        {
            int val1 = costs[0], val2 = costs[1], val3 = costs[2];
            if (days[i] < j)
                prev[j] = prev[j];
            else
            {
                if (days[i] + 1 < 366)
                    val1 += prev[days[i] + 1];
                if (days[i] + 7 < 366)
                    val2 += prev[days[i] + 7];
                if (days[i] + 30 < 366)
                    val3 += prev[days[i] + 30];

                prev[j] = std::min({val1, val2, val3});
            }
        }
    }

    std::cout << prev[0];
}