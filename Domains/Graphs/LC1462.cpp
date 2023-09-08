#include <bits/stdc++.h>
using namespace std;

bool traverse(std::vector<int> adj[], std::vector<int> &vis, int n, int u, int v)
{
    vis[u] = 1;
    for (auto i : adj[u])
    {
        if (i == v)
            return true;

        if (vis[i] == 0)
            if (traverse(adj, vis, n, i, v))
                return true;
    }

    return false;
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

    int k;
    std::cin >> k;

    std::vector<std::vector<int>> queries(k, std::vector<int>(2, 0));
    for (int i = 0; i < k; i++)
    {
        std::cin >> queries[i][0] >> queries[i][1];
    }

    int n;
    std::cin >> n;

    std::vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        adj[num[i][0]].push_back(num[i][1]);
    }

    std::vector<int> res;
    for (int i = 0; i < queries.size(); i++)
    {
        std::vector<int> vis(n, 0);
        res.push_back(traverse(adj, vis, n, queries[i][0], queries[i][1]));
    }

    for (auto i : res)
        std::cout << i << " ";
}