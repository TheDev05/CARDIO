#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    int m;
    std::cin >> m;

    std::vector<std::vector<int>> num(m, std::vector<int>(2, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    std::vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        adj[num[i][0]].push_back(num[i][1]);
        adj[num[i][1]].push_back(num[i][0]);
    }

    std::vector<int> vis(n, 0);

    int count = 0, extra = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            count++;
            std::queue<int> inox;

            inox.push(i);
            vis[i] = 1;

            int node = 0, edge = 0;
            while (inox.size())
            {
                int temp = inox.front();
                inox.pop();

                node++;
                edge += adj[temp].size();

                for (auto j : adj[temp])
                    if (vis[j] == 0)
                        inox.push(j),
                            vis[j] = 1;
            }

            edge /= 2;

            if (edge && edge > node - 1)
                extra += edge - (node - 1);
        }
    }

    std::cout << extra;

    int ans = count - 1;
    if (extra < count - 1)
        ans = -1;

    std::cout << ans;
}