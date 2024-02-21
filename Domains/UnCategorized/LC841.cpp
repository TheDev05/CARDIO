#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;

        std::vector<int> temp(m, 0);
        for (auto &j : temp)
            std::cin >> j;

        num.push_back(temp);
    }

    std::vector<int> adj[num.size()];
    for (int i = 0; i < num.size(); i++)
    {
        for (auto j : num[i])
            adj[i].push_back(j);
    }

    std::vector<int> vis(num.size(), 0);
    std::queue<int> inox;

    inox.push(0);
    vis[0] = 1;

    while (inox.size())
    {
        auto it = inox.front();
        inox.pop();

        for (auto i : adj[it])
            if (vis[i] == 0)
                inox.push(i),
                    vis[i] = 1;
    }

    bool ok = true;
    if (*min_element(begin(vis), end(vis)) == 0)
        ok = false;

    std::cout << ok;
}