#include <bits/stdc++.h>
using namespace std;

bool check(std::vector<int> num[], std::vector<int> &vis, int vertex)
{
    vis[i] = 1;

    for (auto i : num[i])
    {
        if (vis[i])
            return true;
        else
        {
            if (check(num, vis, i))
                return true;
        }
    }

    return false;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num[n];
    for (int i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;

        for (int j = 0; j < m; j++)
        {
            int temp;
            std::cin >> temp;

            num[i].push_back(temp);
        }
    }

    std::vector<int> vis(n, 0);

    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
            ok |= check(num, vis, i);
    }

    std::cout << ok;
}