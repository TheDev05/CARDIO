#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<int> adj[], std::vector<int> &vis, int index)
{
    vis[index] = 1;
    int count = 0;

    for (auto i : adj[index])
    {
        if (vis[i] == -1)
            count += traverse(adj, vis, i);
        else
            count += vis[i];
    }

    count = count ? 1 : 0;
    vis[index] = count;

    return count;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;

        std::vector<int> temp(m);
        for (auto &j : temp)
            std::cin >> j;

        num.push_back(temp);
    }

    std::vector<int> adj[num.size()];
    for (int i = 0; i < num.size(); i++)
    {
        adj[i] = num[i];
    }

    std::vector<int> vis(num.size(), -1);

    // -1 : not vis, 0 : terminal node, 1 : visited

    for (int i = 0; i < num.size(); i++)
    {
        if (vis[i] == -1)
            traverse(adj, vis, i);
    }

    std::vector<int> res;
    for (int i = 0; i < n; i++)
        if (vis[i] == 0)
            res.push_back(i);
}