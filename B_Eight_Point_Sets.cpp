#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 8;

    std::vector<std::pair<int, int>> num(n), ignore;
    std::map<int, int> left, right;
    std::set<std::pair<int, int>> inox;

    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i].first >> num[i].second;
        inox.insert({num[i].first, num[i].second});

        left[num[i].first]++;
        right[num[i].second]++;
    }

    if (left.size() != 3 || right.size() != 3)
    {
        std::cout << "ugly\n";
        return 0;
    }

    std::vector<int> data1, data2;
    for (auto i : left)
        data1.push_back(i.first);

    for (auto i : right)
        data2.push_back(i.first);

    for (int i = 0; i < data1.size(); i++)
    {
        for (int j = 0; j < data2.size(); j++)
        {
            if (inox.count({data1[i], data2[j]}) == false)
                ignore.push_back({data1[i], data2[j]});
        }
    }

    if (ignore.size() != 1 || ignore[0].first != data1[1] || ignore[0].second != data2[1])
    {
        std::cout << "ugly\n";
        return 0;
    }

    std::cout << "respectable\n";
}