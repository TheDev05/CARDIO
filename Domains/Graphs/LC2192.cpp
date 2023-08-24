#include <bits/stdc++.h>
using namespace std;

void getPack(int j, std::set<int> &temp, std::vector<int> local[], std::set<int> &vis)
{
    temp.insert(j);
    vis.insert(j);

    for (auto i : local[j])
        if (vis.count(i) == false)
            getPack(i, temp, local, vis);
}

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

    std::vector<int> num[n];
    std::vector<int> indeg(n, 0);

    for (int i = 0; i < m; i++)
    {
        num[adj[i][0]].push_back(adj[i][1]);
    }

    std::vector<int> local[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < num[i].size(); j++)
        {
            local[num[i][j]].push_back(i);
        }
    }

    std::vector<std::vector<int>> res;
    for (int i = 0; i < n; i++)
    {
        std::set<int> temp;
        std::set<int> vis;

        for (auto j : local[i])
            getPack(j, temp, local, vis);

        std::vector<int> atom;
        for (auto k : temp)
            atom.push_back(k);
            
        res.push_back(atom);
    }

    for (auto i : res)
    {
        if (i.empty())
            std::cout << "X";
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}