#include <bits/stdc++.h>
using namespace std;

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

    std::vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        adj[num[i][0]].push_back(num[i][1]);
        adj[num[i][1]].push_back(num[i][0]);
    }

    std::vector<std::pair<int, int>> edges;
    for (int i = 0; i < n; i++)
    {
        edges.push_back({adj[i].size(), i});
    }

    sort(edges.begin(), edges.end());
    std::vector<int> wt(n, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        wt[edges[i].second] = edges[i].first;
    }

    int sum = 0;

    std::queue<int> inox;
    std::vector<int> vis(n, 0);

    inox.push(0);
    vis[0] = 1;

    while (inox.size())
    {
        int local = inox.front();
        inox.pop();

        for (auto i : adj[local])
        {
            if (vis[i] == 0)
            {
                vis[i] = 1;
                inox.push(i);

                sum += wt[local] + wt[i];
            }
        }
    }

    std::cout << sum;
}