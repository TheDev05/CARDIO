#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> adj(n - 1, std::vector<int>(2, 0));
    for (int i = 0; i < n - 1; i++)
    {
        std::cin >> adj[i][0] >> adj[i][1];
    }

    int m;
    std::cin >> m;

    std::vector<int> restricted(m);
    for (auto &i : restricted)
        std::cin >> i;

    std::set<int> avoid;
    for (auto i : restricted)
        avoid.insert(i);

    std::vector<int> num[n];
    for (int i = 0; i < n - 1; i++)
    {
        num[adj[i][0]].push_back(adj[i][1]);
        num[adj[i][1]].push_back(adj[i][0]);
    }

    std::queue<int> inox;
    std::vector<int> vis(n, 0);

    inox.push(0);
    vis[0] = 1;

    int count = 0;
    while (inox.size())
    {
        int local = inox.front();
        inox.pop();

        count++;
        for (auto i : num[local])
        {
            if (vis[i] == 0 && avoid.count(i) == false)
            {
                vis[i] = 1;
                inox.push(i);
            }
        }
    }

    std::cout << count;
}