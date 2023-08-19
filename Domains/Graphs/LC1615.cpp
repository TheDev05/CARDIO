#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    std::cin >> m;

    std::vector<std::vector<int>> adj(m, std::vector<int>(2, 0));
    for (int i = 0; i < m; i++)
    {
        std::cin >> adj[i][0] >> adj[i][1];
    }

    int n;
    std::cin >> n;

    std::set<int> num[n];
    for (int i = 0; i < m; i++)
    {
        num[adj[i][0]].insert(adj[i][1]);
        num[adj[i][1]].insert(adj[i][0]);
    }

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i + 1; j < n; j++)
        {
            int temp = (int)(num[i].size() + num[j].size());
            if (num[i].count(j))
                sum--;

            sum = std::max(sum, temp);
        }

        max = std::max(max, sum);
    }

    std::cout << max;
}