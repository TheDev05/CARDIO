#include <bits/stdc++.h>
using namespace std;

bool traverse(std::vector<int> adj[], std::vector<int> &vis, int index, bool color)
{
    vis[index] = color;
    for (auto i : adj[index])
        if (vis[i] == -1)
        {
            if (traverse(adj, vis, i, !color))
                return true;
        }
        else if (vis[i] == color)
            return true;

    return false;
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

    std::vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        for (auto j : num[i])
            adj[i].push_back(j);
    }

    std::vector<int> vis(num.size(), -1);
    for (int i = 0; i < num.size(); i++)
        if (vis[i] == -1)
            if (traverse(adj, vis, i, 0))
                return false;

    return true;
}