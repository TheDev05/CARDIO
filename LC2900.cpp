#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::string> num(n);
    std::vector<int> bin(n);

    for (auto &i : num)
        std::cin >> i;

    for (auto &i : bin)
        std::cin >> i;

    std::vector<std::vector<int>> store(n);
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (bin[i] != bin[j])
            {
                store[i] = store[j];
                break;
            }
        }

        store[i].push_back(i);
        max = std::max(max, (int)store[i].size());
    }

    std::vector<std::string> res;
    for (auto i : store)
    {
        if (max == i.size())
        {
            for (auto j : i)
            {
                res.push_back(num[j]);
                break;
            }
        }
    }

    for (auto i : res)
        std::cout << i << " ";
}