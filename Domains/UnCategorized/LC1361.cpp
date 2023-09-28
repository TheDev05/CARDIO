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
        if (left[i] >= 0)
            adj[i].push_back(left[i]);
        if (right[i] >= 0)
            adj[i].push_back(right[i]);
    }

    std::vector<int> indeg(n, 0), outdeg(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < adj[i].size(); j++)
        {
            indeg[adj[i][j]]++;
        }

        outdeg[i] = adj[i].size();
    }

    std::queue<int> inox;
    std::vector<int> vis(n, 0);

    vis[0] = 1;
    inox.push(0);

    bool ok = false;
    while (inox.size())
    {
        int it = inox.front();
        inox.pop();

        int count = 0;
        for (auto i : adj[it])
        {
            if (vis[i])
                count++;
            else
            {
                vis[i] = 1;
                inox.push(i);
            }
        }

        if (count)
        {
            ok |= true;
            break;
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] > 1 || outdeg[i] > 2)
            ok |= true;
        if (indeg[i] == 0)
            count++;
    }

    if (count > 1)
        ok |= true;

    std::cout << !ok;
}