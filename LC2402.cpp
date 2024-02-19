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

    std::map<int, int> data;
    std::set<std::pair<int, int>> inox;

    for (int i = 0; i < num.size(); i++)
    {
        if (inox.size())
        {
            int idx = inox.begin()->second, val = inox.begin()->first;
            if (inox.begin()->first <= num[i][0])
            {
                while (inox.size() && inox.begin()->first <= num[i][0])
                {
                    val = inox.begin()->first;
                    idx = inox.begin()->second;

                    inox.erase(inox.begin());
                }
            }
            else if (inox.size() >= n)
                inox.erase(inox.begin());

            inox.insert({val + (num[i][1] - num[i][0]), idx});
            data[idx]++;
        }
        else
            inox.insert({num[i][1], i}),
                data[i]++;
    }

    for (auto i : data)
        std::cout << i.first << " " << i.second << '\n';

    int max = 0, res = 0;
    for (auto i : data)
        if (i.second > max)
            max = i.second, res = i.first;

    std::cout << res;
}

/*
12 1
13 3
19 0
19 2


*/