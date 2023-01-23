#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &days, std::vector<int> &costs, int hold, int index)
{
    if (index >= days.size())
        return 0;

    int val1 = 1e7, val2 = 1e7, val3 = 1e7;
    if (days[index] < hold)
        return (getCount(days, costs, hold, index + 1));
    else
    {
        val1 = costs[0] + getCount(days, costs, days[index] + 1, index + 1);
        val2 = costs[1] + getCount(days, costs, days[index] + 7, index + 1);
        val3 = costs[2] + getCount(days, costs, days[index] + 30, index + 1);
    }

    return std::min({val1, val2, val3});
}

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

    std::cout << getCount(days, costs, 1, 0);
}