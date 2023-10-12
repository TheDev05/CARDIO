#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        adj[i].push_back(num[i]);
    }

    std::vector<int> res(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (auto j : adj[i])
            res[j] += i;
    }

    int max = 0, index = 0;
    for (int i = 0; i < n; i++)
    {
        if (res[i] > max)
            max = res[i], index = i;
    }

    std::cout << index;
}