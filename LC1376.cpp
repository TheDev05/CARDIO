#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    int head;
    std::cin >> head;

    std::vector<int> manager(n), time(n);
    for (auto &i : manager)
        std::cin >> i;

    for (auto &i : time)
        std::cin >> i;

    std::vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        adj[manager[i]].push_back(i);
    }

    std::queue<int> inox;
    std::vector<int> vis(n, 0), dist(n, 0);

    inox.push(head);
    vis[head] = 1;
    dist[head] = time[head];

    while (inox.size())
    {
        int local = inox.front();
        inox.pop();

        vis[local] = 1;
        for (auto i : adj[local])
        {
            if (vis[i] == 0)
            {
                inox.push(i);
                dist[i] = std::min(dist[i], dist[local] + time[local]);
            }
        }
    }

    int max = 0;
    for (auto i : dist)
        max = std::max(max, i);

    std::cout << max;
}