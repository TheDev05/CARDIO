#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<int> &num, std::vector<int> &vis, int index, int count)
{
    if (vis[index] == -1)
    {
        vis[index] = 0;
        vis[index] = traverse(num, vis, num[index], count + 1);

        return vis[index];
    }
    else
        return count;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::vector<int> vis(n, -1);

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[num[i]] == -1)
            vis[num[i]] = traverse(num, vis, num[i], 0);

        max = std::max(max, vis[num[i]]);
    }

    std::cout << max;
}