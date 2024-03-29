#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    int m;
    std::cin >> m;

    std::vector<std::vector<int>> num(m, std::vector<int>(3, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    int src, dst, k;
    std::cin >> src >> dst >> k;

    std::vector<std::pair<int, int>> adj[n];
    for (int i = 0; i < num.size(); i++)
    {
        adj[num[i][0]].push_back({num[i][1], num[i][2]});
    }

    k += 2;

    std::priority_queue<std::pair<int, std::pair<int, int>>, std::vector<std::pair<int, std::pair<int, int>>>, greater<std::pair<int, std::pair<int, int>>>> inox;
    std::vector<int> dist(n, INT_MAX);

    // k, (dist, node)
    inox.push({1, {0, src}});
    dist[src] = 1;

    while (inox.size())
    {
        int temp = inox.top().first;
        int distance = inox.top().second.first;
        int node = inox.top().second.second;
        inox.pop();

        if (temp >= k)
            continue;

        for (auto [adjNode, adjDist] : adj[node])
        {
            if (distance + adjDist < dist[adjNode])
            {
                dist[adjNode] = distance + adjDist;
                inox.push({temp+1, {dist[adjNode], adjNode}});
            }
        }
    }

    std::cout << dist[dst];
}