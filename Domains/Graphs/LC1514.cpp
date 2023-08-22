#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    std::cin >> m;

    std::vector<std::vector<int>> edges(m, std::vector<int>(2, 0));
    for (int i = 0; i < m; i++)
    {
        std::cin >> edges[i][0] >> edges[i][1];
    }

    std::vector<double> prob(m);
    for (int i = 0; i < m; i++)
    {
        std::cin >> prob[i];
    }

    int n;
    std::cin >> n;

    int src, target;
    std::cin >> src >> target;

    std::vector<std::pair<int, double>> num[n];
    for (int i = 0; i < m; i++)
    {
        num[edges[i][0]].push_back({edges[i][1], prob[i]});
        num[edges[i][1]].push_back({edges[i][0], prob[i]});
    }

    std::vector<double> dist(n, INT_MAX);
    std::priority_queue<std::pair<double, int>, std::vector<std::pair<double, int>>, greater<std::pair<int, double>>> pq;

    pq.push({0, src});
    dist[src] = 0;

    while (pq.size())
    {
        auto it = pq.top();
        pq.pop();

        int node = it.second;
        int wt = it.first;

        for (auto i : num[node])
        {
            int adjNode = i.first;
            double adjWt = i.second;

            if (dist[node] * adjWt < dist[adjNode])
            {
                dist[adjNode] = dist[node] * adjWt;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }

    std::cout << dist[target];
}