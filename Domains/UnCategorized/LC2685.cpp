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
    for (int i = 0; i < m; i++)
    {
        adj[num[i][0]].push_back(num[i][1]);
        adj[num[i][1]].push_back(num[i][0]);
    }

    std::vector<int> vis(n, 0);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            std::queue<int> inox;
            std::map<int, int> data;

            inox.push(i);
            vis[i] = 1;

            int totalNodes = 0;
            while (inox.size())
            {
                int temp = inox.front();
                inox.pop();

                data[adj[temp].size()]++;
                totalNodes++;

                for (auto j : adj[temp])
                {
                    if (vis[j] == 0)
                        vis[j] = 1,
                        inox.push(j);
                }
            }


            if (data[totalNodes - 1] == totalNodes)
                count++;
        }
    }

    std::cout << count;
}