#include <bits/stdc++.h>
using namespace std;

void traverse(std::vector<int> adj[], std::vector<int> &source, std::vector<int> &target, std::vector<int> &vis, std::map<int, int> &data1, std::map<int, int> &data2, int index)
{
    vis[index] = 1;
    for (auto i : adj[index])
    {
        if (vis[i] == 0)
            traverse(adj, source, target, vis, data1, data2, i);
    }

    data1[source[index]]++;
    data2[target[index]]++;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> source(n), target(n);
    for (auto &i : source)
        std::cin >> i;

    for (auto &i : target)
        std::cin >> i;

    int m;
    std::cin >> m;

    std::vector<std::vector<int>> swap(m, std::vector<int>(2, 0));
    for (int i = 0; i < m; i++)
    {
        std::cin >> swap[i][0] >> swap[i][1];
    }

    std::vector<int> adj[n];
    for (int i = 0; i < swap.size(); i++)
    {
        adj[swap[i][0]].push_back(swap[i][1]);
        adj[swap[i][1]].push_back(swap[i][0]);
    }

    std::vector<int> vis(n, 0);
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            std::map<int, int> data1, data2;
            traverse(adj, source, target, vis, data1, data2, i);

            int count = 0;
            for (auto j : data1)
            {
                if (data2[j.first])
                {
                    data2[j.first]--;
                    if (data2[j.first] == 0)
                        data2.erase(j.first);
                }
                else
                    count++;
            }

            res += count;
        }
    }

    std::cout << res;
}