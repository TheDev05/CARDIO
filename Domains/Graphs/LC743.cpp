#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    std::cin >> m;

    std::vector<std::vector<int>> adj(m, std::vector<int>(3, 0));
    for (int i = 0; i < m; i++)
    {
        std::cin >> adj[i][0] >> adj[i][1] >> adj[i][2];
    }

    int n;
    std::cin >> n;

    int src;
    std::cin >> src;

    std::vector<std::pair<int, int>> num[n + 1];
    for (int i = 0; i < m; i++)
    {
        num[adj[i][0]].push_back({adj[i][1], adj[i][2]});
    }

    std::vector<int> dist(n + 1, INT_MAX);
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, greater<std::pair<int, int>>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while (pq.size())
    {
        auto it = pq.top();
        pq.pop();

        int node = it.second;
        int wt = it.first;

        for (auto i : num[node])
        {
            int adjNode = i.first;
            int adjWt = i.second;

            if (dist[node] + adjWt < dist[adjNode])
            {
                dist[adjNode] = dist[node] + adjWt;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }

    int max = 0;
    for (int i = 1; i < dist.size(); i++)
    {
        max = std::max(max, dist[i]);
    }

    std::cout << max;
}