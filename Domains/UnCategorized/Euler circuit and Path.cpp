#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v;
    std::cin >> v;

    int n;
    std::cin >> n;

    std::vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        for (auto &j : adj[i])
            std::cin >> j;
    }

    for (int i = 0; i < v; i++)
        if (adj[i].size() > 2)
            return 0;

    std::vector<int> vis(v, 0);
    std::queue<int> inox;

    inox.push(0);

    bool ok = true;
    while (inox.size())
    {
        int node = inox.front();
        vis[node] = 1;

        inox.pop();

        int count = 0;
        for (auto i : adj[node])
            if (vis[i])
                count++;
            else
                inox.push(i);

        if (count > 1)
            return 2;
    }

    for (int i = 0; i < v; i++)
        if (adj[i].size() && vis[i] == 0)
            return 0;

    return 1;
}