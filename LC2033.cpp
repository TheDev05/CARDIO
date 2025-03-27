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

    int x;
    std::cin >> x;

    std::vector<int> temp;

    for (auto i : num)
    {
        for (auto j : i)
        {
            if (j % x != 0)
                return 0;

            temp.push_back(j / x);
        }
    }

    sort(begin(temp), end(temp));

    int median = temp[temp.size() / 2];
    int sum = 0;

    for (int i = 0; i < temp.size(); i++)
    {
        sum += std::abs(median - temp[i]);
    }

    std::cout << sum;
}