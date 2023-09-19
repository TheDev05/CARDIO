#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i][0] >> num[i][1];
    }

    std::vector<int> adj[n];
    for (int i = 0; i < num.size(); i++)
    {
        adj[num[i][0]].push_back(num[i][1]);
        adj[num[i][1]].push_back(num[i][0]);
    }

    std::vector<int> res, vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            std::queue<int> inox;

            inox.push(i);
            vis[i] = 1;

            int count = 0;
            while (inox.size())
            {
                auto it = inox.front();
                inox.pop();

                count++;
                int local = it;

                for (auto i : adj[local])
                {
                    if (vis[i] == 0)
                    {
                        vis[i] = 1;
                        inox.push(i);
                    }
                }
            }

            res.push_back(count);
        }
    }

    int sum = accumulate(res.begin(), res.end(), 0);
    int total = 0;

    for (int i = 0; i < res.size(); i++)
    {
        total += (res[i] * (sum - res[i]));
        sum = sum - res[i];
    }

    std::cout << total;
}