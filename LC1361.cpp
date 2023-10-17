#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> left(n), right(n);
    for (auto &i : left)
        std::cin >> i;

    for (auto &i : right)
        std::cin >> i;

    std::vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        if (left[i] != -1)
            adj[i].push_back(left[i]);
        if (right[i] != -1)
            adj[i].push_back(right[i]);
    }

    std::vector<int> indeg(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (auto j : adj[i])
            indeg[j]++;
    }

    for (auto i : indeg)
        if (i > 1)
            std::cout << "NO";

    std::vector<int> vis(n, 0);
    std::queue<int> inox;

    inox.push(0);
    vis[0] = 1;

    while (inox.size())
    {
        int node = inox.front();
        inox.pop();

        for (auto i : adj[node])
        {
            if (vis[i])
                std::cout << "NO";

            vis[i] = 1;
            inox.push(i);
        }
    }

    std::cout << "YES\n";
}