#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(2, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    ranges::sort(num);

    int max = 0;
    for (int i = 0; i < num.size() - 1; i++)
    {
        max = std::max(max, std::abs(num[i][0] - num[i + 1][0]));
    }

    std::cout << max;
}