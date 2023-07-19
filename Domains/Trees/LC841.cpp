#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;

        std::vector<int> temp(m);
        for (auto &j : temp)
            std::cin >> j;

        num.push_back(temp);
    }

    std::vector<int> visited(n, 0);
    std::queue<int> inox;

    visited[0] = 1;
    for (auto i : num[0])
    {
        inox.push(i);
        visited[i] = 1;
    }

    while (inox.size())
    {
        int temp = inox.front();
        inox.pop();

        for (auto i : num[temp])
        {
            if (visited[i] == 0)
            {
                inox.push(i);
                visited[i] = 1;
            }
        }
    }

    bool ok = true;
    for (auto i : visited)
        if (i == 0)
            ok = false;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
            std::cout << i << "\n";
    }

    if (ok)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
}