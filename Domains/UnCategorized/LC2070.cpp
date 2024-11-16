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

    int q;
    std::cin >> q;

    std::vector<int> queries(q);
    for (auto &i : queries)
        std::cin >> i;

    std::vector<std::pair<int, int>> data;
    for (auto i : num)
        data.push_back({i[0], i[1]});

    sort(data.begin(), data.end());

    std::map<int, int> res;

    int max = 0;
    for (int i = 0; i < data.size(); i++)
    {
        max = std::max(max, data[i].second);
        res[data[i].first] = max;
    }

    std::vector<int> result;
    for (int i = 0; i < queries.size(); i++)
    {
        if (queries[i] < res.begin()->first)
        {
            result.push_back(0);
            continue;
        }

        auto idx = res.lower_bound(queries[i]);
        if (idx == res.end() || idx->first != queries[i])
            idx--;

        result.push_back(idx->second);
    }

    for (auto i : result)
        std::cout << i << " ";
}