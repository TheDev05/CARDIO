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

    std::vector<int> num[n];
    for (int i = 0; i < m; i++)
    {
        num[adj[i][0]].push_back(adj[i][1]);
        num[adj[i][1]].push_back(adj[i][0]);
    }

    std::vector<int> vis(n, 0);

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            std::queue<int> inox;

            inox.push(i);
            vis[i] = 1;

            int edges = INT_MAX, size = 0;
            while (inox.size())
            {
                int local = inox.front();
                inox.pop();

                size++;
                edges = std::min((int)(num[local].size()), edges);

                for (auto j : num[local])
                {
                    if (vis[j] == 0)
                    {
                        vis[j] = 1;
                        inox.push(j);
                    }
                }
            }

            if (edges >= size - 1)
                res++;
        }
    }

    std::cout << res;
}