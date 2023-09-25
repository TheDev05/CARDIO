#include <bits/stdc++.h>
using namespace std;

int dfs(std::vector<int> adj[], std::vector<int> &vis, std::vector<int> &size, int index)
{
    vis[index] = 1;

    int sum = 0;
    for (auto i : adj[index])
        sum += dfs(adj, vis, size, i);

    size[index] = sum + 1;
    return size[index];
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        if (i)
        {
            adj[i].push_back(num[i]);
            adj[num[i]].push_back(i);
        }
    }

    std::vector<int> size(n, 0);
    std::vector<int> vis(n, 0);

    dfs(adj, vis, size, 0);

    int max = 0;
    std::map<int, int> data;

    for (int i = 0; i < n; i++)
    {
        int total = 1;
        for (auto j : adj[i])
        {
            if (j != num[i])
                total *= size[j];
        }

        if (i)
        {
            std::queue<int> inox;
            std::vector<int> vis(n, 0);

            inox.push(num[i]);
            vis[num[i]] = 1;

            int count = 0;
            while (inox.size())
            {
                int it = inox.front();
                inox.pop();

                count++;
                for (auto k : adj[it])
                {
                    if (vis[k] == 0)
                    {
                        inox.push(k);
                        vis[k] = 1;
                    }
                }
            }

            total *= count;
        }

        data[total]++;
        max = std::max(max, total);
    }

    std::cout << data[max];
}