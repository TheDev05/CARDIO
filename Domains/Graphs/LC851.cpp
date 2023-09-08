#include <bits/stdc++.h>
using namespace std;

void traverse(std::vector<int> adj[], int index, std::vector<int> &quiet, std::vector<int> &vis, int &val)
{
    vis[index] = 1;
    val = std::min(val, quiet[index]);

    for (auto i : adj[index])
    {
        if (vis[i] == 0)
            traverse(adj, i, quiet, vis, val);
    }
}

int main()
{
    int m;
    std::cin >> m;

    std::vector<std::vector<int>> num(m, std::vector<int>(2, 0));
    for (int i = 0; i < m; i++)
    {
        std::cin >> num[i][0] >> num[i][1];
    }

    int n;
    std::cin >> n;

    std::vector<int> quiet(n);
    for (auto &i : quiet)
        std::cin >> i;

    std::vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        adj[num[i][1]].push_back(num[i][0]);
    }

    std::vector<int> res, vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        int val = INT_MAX;
        traverse(adj, i, quiet, vis, val);

        res.push_back(val);
    }
}