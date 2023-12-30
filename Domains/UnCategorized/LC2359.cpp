#include <bits/stdc++.h>
using namespace std;

void traverse(std::vector<int> &num, std::vector<int> &vis, int node)
{
    std::queue<int> inox;

    inox.push(node);
    vis[node] = 0;

    while (inox.size())
    {
        auto size = inox.size();
        for (int i = 0; i < size; i++)
        {
            auto it = inox.front();
            inox.pop();

            int temp = num[it];
            if (temp == -1)
                continue;

            if (vis[temp] == -1)
                inox.push(temp), vis[temp] = vis[it] + 1;
        }
    }
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int n1, n2;
    std::cin >> n1 >> n2;

    std::vector<int> data1(num.size(), -1);
    std::vector<int> data2(num.size(), -1);

    traverse(num, data1, n1);
    traverse(num, data2, n2);

    int dist = INT_MAX, node = -1;
    for (int i = 0; i < data1.size(); i++)
    {
        if (std::min(data1[i], data2[i]) != -1)
        {
            if (dist > std::max(data1[i], data2[i]))
                dist = std::max(data1[i], data2[i]),
                node = i;
        }
    }

    std::cout << node;
}