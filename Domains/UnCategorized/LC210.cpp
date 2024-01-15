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
    for (int i = 0; i < num.size(); i++)
    {
        adj[num[i][1]].push_back(num[i][0]);
    }
    
    std::vector<int> indeg(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (auto j : adj[i])
            indeg[j]++;
    }

    std::queue<int> inox;
    for (int i = 0; i < indeg.size(); i++)
    {
        if (indeg[i] == 0)
            inox.push(i);
    }

    std::vector<int> res;
    while (inox.size())
    {
        int node = inox.front();
        inox.pop();

        res.push_back(node);

        for (auto adjNode : adj[node])
        {
            indeg[adjNode]--;
            if (indeg[adjNode] == 0)
                inox.push(adjNode);
        }
    }

    if (res.size() != n)
        res.clear();

    for (auto i : res)
        std::cout << i << " ";
}