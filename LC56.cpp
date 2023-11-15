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

    sort(begin(num), end(num));

    int min = num[0][0], max = num[0][1];
    std::vector<std::vector<int>> res;

    for (int i = 1; i < num.size(); i++)
    {
        if (min <= num[i][0] && num[i][0] <= max)
        {
            max = std::max(max, num[i][1]);
        }
        else
        {
            res.push_back({min, max});
            min = num[i][0];
            max = num[i][1];
        }
    }

    res.push_back({min, max});

    for (auto i : res)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}