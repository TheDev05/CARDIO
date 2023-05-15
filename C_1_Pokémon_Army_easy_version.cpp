#include <bits/stdc++.h>
using namespace std;

#define int long long

int traverse(std::vector<int> &num, std::vector<std::vector<int>> &store, int index, int toggle)
{
    if (index >= num.size())
        return 0;

    if (store[index][toggle] == -1)
    {
        int sum1 = INT_MIN, sum2 = 0;
        sum2 = traverse(num, store, index + 1, toggle);

        if (toggle)
        {
            toggle = (toggle == 1) ? 0 : 1;
            sum1 = num[index] + traverse(num, store, index + 1, toggle);
            toggle = (toggle == 1) ? 0 : 1;
        }
        else
        {
            toggle = (toggle == 1) ? 0 : 1;
            sum1 = -num[index] + traverse(num, store, index + 1, toggle);
            toggle = (toggle == 1) ? 0 : 1;
        }

        store[index][toggle] = std::max(sum1, sum2);
    }

    return store[index][toggle];
}

int32_t main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, k;
        std::cin >> n >> k;

        std::vector<int> num(n);
        for (auto &i : num)
            std::cin >> i;

        std::vector<std::vector<int>> store(num.size(), std::vector<int>(2, -1));
        std::cout << traverse(num, store, 0, 1) << '\n';
    }
}