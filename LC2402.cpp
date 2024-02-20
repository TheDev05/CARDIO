#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    int m;
    std::cin >> m;

    std::vector<std::vector<int>> num(m, std::vector<int>(2, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    sort(num.begin(), num.end());

    std::set<std::pair<int, int>> inox;
    std::map<int, int> data;
    std::map<int, int> res;

    for (int i = 0; i < num.size(); i++)
    {
        for (auto i : inox)
            std::cout << i.first << " " << i.second << '\n';
        std::cout << '\n';

        if (inox.size())
        {
            if (inox.begin()->first < num[i][0])
            {
                int idx = INT_MAX, val = 0;
                while (inox.size() && inox.begin()->first < num[i][0])
                {
                    if (inox.begin()->second < idx)
                        idx = inox.begin()->second,
                        val = inox.begin()->first;

                    res[inox.begin()->second] = inox.begin()->first;
                    inox.erase(inox.begin());
                }

                if (inox.size() < idx)
                {
                    idx = inox.size();
                    val = res[inox.size()];
                }

                inox.insert({val + (num[i][1] - num[i][0]), idx}),
                    data[idx]++;
            }
            else
            {
                if (inox.size() < n)
                    inox.insert({num[i][1], i}), data[i]++;
                else
                {
                    int val = inox.begin()->first;
                    int idx = inox.begin()->second;

                    res[inox.begin()->second] = inox.begin()->first;
                    inox.erase(inox.begin());

                    inox.insert({val + (num[i][1] - num[i][0]), idx});
                    data[idx]++;
                }
            }
        }
        else
            inox.insert({num[i][1], i}),
                data[i]++;
    }

    for (auto i : data)
        std::cout << i.first << " " << i.second << '\n';

    int max = 0, ans = 0;
    for (auto i : data)
        if (i.second > max)
            max = i.second, ans = i.first;

    std::cout << ans;
}