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

    std::vector<std::pair<int, int>> num[n];
    for (int i = 0; i < m; i++)
    {
        num[adj[i][0]].push_back({adj[i][1], adj[0][2]});
    }

    int src, target;
    std::cin >> src >> target;

    int min_stops;
    std::cin >> min_stops;

    std::vector<int> dist(n, INT_MAX);
    std::priority_queue<std::pair<std::pair<int, int>, int>, std::vector<std::pair<std::pair<int, int>, int>>, greater<std::pair<std::pair<int, int>, int>>> pq;

    dist[src] = 0;
    pq.push({{0, 0}, src});

    // stops, dist, node

    while (pq.size())
    {
        auto it = pq.top();
        pq.pop();

        int stops = it.first.first;
        int wt = it.first.second;
        int node = it.second;

        if (stops > min_stops)
            continue;

        for (auto i : num[node])
        {
            int adjNode = i.first;
            int adjWt = i.second;

            if (dist[node] + adjWt < dist[adjNode])
            {
                dist[adjNode] = dist[node] + adjWt;
                pq.push({{stops + 1, dist[adjNode]}, adjNode});
            }
        }
    }

    std::cout << dist[target];
}
