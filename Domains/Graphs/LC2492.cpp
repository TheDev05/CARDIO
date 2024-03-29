#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> adj(n, std::vector<int>(3, 0));
    for (int i = 0; i < n; i++)
    {
        std::cin >> adj[i][0] >> adj[i][1] >> adj[i][2];
    }

    std::vector<std::pair<int, int>> num[n + 1];
    for (int i = 0; i < n; i++)
    {
        num[adj[i][0]].push_back({adj[i][1], adj[i][2]});
        num[adj[i][1]].push_back({adj[i][0], adj[i][2]});
    }

    std::vector<int> vis(n + 1, 0);

    int min = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            std::queue<int> inox;

            inox.push(i);
            vis[i] = 1;

            int temp = INT_MAX;
            bool ok = false;

            while (inox.size())
            {
                auto local = inox.front();
                inox.pop();

                vis[local] = 1;
                for (auto i : num[local])
                {
                    int node = i.first;
                    int wt = i.second;

                    if (vis[node] == 0)
                    {
                        temp = std::min(temp, wt);
                        if (node == n)
                            ok = true;

                        inox.push(node);
                    }
                }
            }

            if (ok)
                min = std::min(min, temp);
        }
    }

    std::cout << min;
}