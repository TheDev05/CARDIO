#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int res = 0, mod = 1e9 + 7;
    auto rev = [&](auto &&rev, int val)
    {
        if (val < 1)
            return;

        res = (res * 10) + (val % 10);
        val = val / 10;

        return rev(rev, val);
    };

    std::map<long long, long long> data;
    for (auto &i : num)
    {
        rev(rev, i);
        i = i - res, res = 0;

        data[i]++;
    }

    long long count = 0;
    for (auto &i : data)
    {
        count += ((i.second * (i.second - 1)) / 2) % mod;
        count = count % mod;
    }

    std::cout << count;
}