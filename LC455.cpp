#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<int> g(n), s(m);
    for (auto &i : g)
        std::cin >> i;

    for (auto &i : s)
        std::cin >> i;

    std::map<int, int> data;
    for (auto i : s)
        data[i]++;

    int count = 0;
    for (int i = 0; i < g.size(); i++)
    {
        if (auto it = data.lower_bound(g[i]); it != data.end())
        {
            count++;
            if (--it->second == 0)
                data.erase(it->first);
        }
    }

    std::cout << count;
}