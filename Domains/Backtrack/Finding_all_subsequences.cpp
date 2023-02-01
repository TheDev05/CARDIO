// Finding all Subsequences

#include <bits/stdc++.h>
using namespace std;

int genSub(std::vector<int> num, std::vector<int> data, int index)
{
    if (index >= num.size())
    {
        for (auto i : data)
            std::cout << i << " ";
        std::cout << '\n';

        return (0);
    }

    data.push_back(num[index]);
    genSub(num, data, index + 1);

    data.pop_back();
    genSub(num, data, index + 1);

    return (0);
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n), data;
    std::iota(num.begin(), num.end(), 1);

    genSub(num, data, 0);

    return (0);
}