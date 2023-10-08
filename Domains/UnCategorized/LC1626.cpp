#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<std::pair<int, int>> &num, int prev, int max, int index)
{
    if (index >= num.size())
        return 0;

    int val1 = 0, val2 = 0;
    if (num[index].first != num[prev].first || prev == num[index].first)
    {
        int temp_max = max;
        int temp_index = prev;

        if (num[index].second > max)
        {
            max = num[index].second;
            prev = index;
        }

        val1 = num[index].second + traverse(num, num[index].first, std::max(max, num[index].second), index + 1);

        max = temp_max;
        prev = temp_index;
    }

    val2 = traverse(num, prev, max, index + 1);

    return std::max(val1, val2);
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<int> scores(n), ages(m);
    for (auto &i : scores)
        std::cin >> i;

    for (auto &i : ages)
        std::cin >> i;

    std::vector<std::pair<int, int>> num;
    for (int i = 0; i < scores.size(); i++)
    {
        num.push_back({ages[i], scores[i]});
    }

    sort(num.begin(), num.end());

    std::cout << traverse(num, -1, -1, 0);
}