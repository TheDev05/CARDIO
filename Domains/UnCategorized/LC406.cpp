#include <bits/stdc++.h>
using namespace std;

bool cmp(std::pair<int, int> a, std::pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;

    return a.second < b.second;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i][0] >> num[i][1];
    }

    std::vector<std::pair<int, int>> data;
    for (auto i : num)
        data.push_back({i[0], i[1]});

    sort(data.begin(), data.end(), cmp);

    std::vector<std::pair<int, int>> res;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        bool ok = true;

        for (int j = 0; j < res.size(); j++)
        {
            if (res[j].first >= data[i].first)
                count++;

            if (count > data[i].second)
            {
                ok = false;
                res.insert(res.begin() + j, data[i]);

                break;
            }
        }

        if (ok)
            res.insert(res.end(), data[i]);
    }

    std::vector<std::vector<int>> result(n, std::vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        result[i][0] = res[i].first;
        result[i][1] = res[i].second;
    }

    for (auto i : result)
        std::cout << i[0] << " " << i[1] << '\n';
}