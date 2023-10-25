#include <bits/stdc++.h>
using namespace std;

void traverse(std::vector<int> adj[], std::vector<int> &temp, std::vector<std::vector<int>> &res, std::vector<int> &vis, int index)
{
    if (index == vis.size() - 1)
    {
        res.push_back(temp);
        return;
    }

    vis[index] = 1;
    for (auto i : adj[index])
    {
        if (vis[i] == 0)
        {
            temp.push_back(i);
            traverse(adj, temp, res, vis, i);
            temp.pop_back();
        }
    }

    return;
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
    for (int i = 0; i < num.size(); i++)
    {
        for (auto j : num[i])
            adj[i].push_back(j);
    }

    std::vector<std::vector<int>> res;
    std::vector<int> temp(1, 0), vis(num.size(), 0);

    traverse(adj, temp, res, vis, 0);
    for (auto i : res)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}