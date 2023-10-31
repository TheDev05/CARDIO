#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> costs(n, std::vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        std::cin >> costs[i][0] >> costs[i][1];
    }

    std::vector<std::pair<int, std::pair<int, int>>> num;
    for (auto i : costs)
        num.push_back({i[0] - i[1], {i[0], i[1]}});

    sort(begin(num), end(num));

    int sum = 0;
    for (int i = 0; i < num.size() / 2; i++)
        sum += num[i].second.first + num[num.size() - 1 - i].second.second;

    std::cout << sum;
}