#include <bits/stdc++.h>
using namespace std;

class dsu
{
    std::vector<int> _size, parent;

public:
    dsu(int n)
    {
        _size.resize(n + 1, 0);
        parent.resize(n + 1, 0);

        for (int i = 0; i < _size.size(); i++)
        {
            _size[i] = 1;
            parent[i] = i;
        }
    }

    int getParent(int node)
    {
        if (parent[node] == node)
            return node;

        return parent[node] = getParent(parent[node]);
    }

    void setUnion(int node1, int node2)
    {
        int parent1 = parent[node1];
        int parent2 = parent[node2];

        if (_size[parent1] < _size[parent2])
            std::swap(node1, node2);

        parent[node2] = parent[node1];
        _size[node1] += _size[node1];
    }
};

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::string> num(n);
    for (auto &i : num)
        std::cin >> i;

    dsu ds(26);

    for (int i = 0; i < num.size(); i++)
    {
        if (num[i][1] == '=' && num[i][2] == '=')
            ds.setUnion(((int)(num[i][0] - '0')), ((int)(num[i][3] - '0')));
        else if (ds.getParent((int)(num[i][0] - '0')) == ds.getParent((int)(num[i][3] - '0')))
            std::cout << 0;
    }

    std::cout << 1;
}