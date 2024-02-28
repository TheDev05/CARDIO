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
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
            inox.push(i);
    }

    int count = 0;
    while (inox.size())
    {
        int local = inox.front();

        inox.pop();
        count++;

        for (auto i : adj[local])
        {
            indeg[i]--;
            if (indeg[i] == 0)
                inox.push(i);
        }
    }

    if (count != n)
        std::cout << "NO";
}