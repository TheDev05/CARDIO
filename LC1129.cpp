#include <bits/stdc++.h>
using namespace std;

void traverse(std::vector<std::pair<int, int>> adj[], std::vector<int> &dist, int color)
{
    std::queue<std::pair<int, int>> inox;

    inox.push({0, color});
    dist[0] = 0;

    while (inox.size())
    {
        auto it = inox.front();
        inox.pop();

        int node = it.first;
        int color = it.second;

        for (auto i : adj[node])
        {
            if (dist[i.first] == -1 && color != i.second)
            {
                inox.push({i.first, i.second});
                if (dist[i.first] == -1)
                    dist[i.first] = INT_MAX;

                dist[i.first] = std::min(1 + dist[node], dist[i.first]);
            }
        }
    }
}

int main()
{
    int n;
    std::cin >> n;

    int blue;
    std::cin >> blue;

    std::vector<std::vector<int>> blueEdges(blue, std::vector<int>(2, 0));
    for (int i = 0; i < blue; i++)
    {
        for (auto &j : blueEdges[i])
            std::cin >> j;
    }

    int red;
    std::cin >> red;

    std::vector<std::vector<int>> redEdges(red, std::vector<int>(2, 0));
    for (int i = 0; i < red; i++)
    {
        for (auto &j : redEdges[i])
            std::cin >> j;
    }

    std::vector<std::pair<int, int>> adj[n];
    for (int i = 0; i < red; i++)
    {
        adj[redEdges[i][0]].push_back({redEdges[i][1], 0});
    }

    for (int i = 0; i < blue; i++)
    {
        adj[blueEdges[i][0]].push_back({blueEdges[i][1], 1});
    }

    std::vector<int> dist(n, -1);

    traverse(adj, dist, 0);
    traverse(adj, dist, 1);

    for (auto i : dist)
        std::cout << i << " ";
}