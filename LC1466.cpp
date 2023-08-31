#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    std::cin >> m;

    std::vector<std::vector<int>> adj(m, std::vector<int>(2, 0));
    for (int i = 0; i < m; i++)
    {
        std::cin >> adj[i][0] >> adj[i][1];
    }

    int n;
    std::cin >> n;

    std::set<int> edges[n];
    std::vector<int> num[n];

    for (int i = 0; i < m; i++)
    {
        edges[adj[i][1]].insert(adj[i][1]);
        num[adj[i][0]].push_back(adj[i][1]);
    }

    std::queue<int> inox;
    std::vector<int> vis(n, 0);

    inox.push(0);
    vis[0] = 1;

    int count = 0;
    while (inox.size())
    {
        int local = inox.front();
        inox.pop();

        for (auto i : num[local])
        {
            if (vis[i] == 0)
            {
                vis[i] = 1;
                inox.push(i);

                if (edges[i].count(local) == false)
                    count++;
            }
        }
    }

    std::cout << count;
}