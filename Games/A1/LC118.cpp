#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> res;
    res.push_back({1});

    for (int i = 1; i < n; i++)
    {
        std::vector<int> temp;
        for (int j = 0; j <= res.back().size() / 2; j++)
        {
            if (j == 0)
                temp.push_back(res.back()[j]);
            else
                temp.push_back(res.back()[j] + res.back()[j - 1]);
        }

        int index = temp.size() - 2;
        if (i & 1)
            index = temp.size() - 1;

        for (int k = index; k >= 0; k--)
        {
            temp.push_back(temp[k]);
        }

        res.push_back(temp);
    }

    for (auto i : res)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}