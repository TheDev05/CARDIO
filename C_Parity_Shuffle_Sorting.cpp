#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> num(n);
        for (auto &i : num)
            std::cin >> i;

        if (is_sorted(num.begin(), num.end()))
        {
            std::cout << "0\n";
            continue;
        }

        std::vector<std::pair<int, int>> store;
        store.push_back({1, n});

        int inox = num[n - 1];
        if ((num[0] + num[n - 1]) & 1)
            inox = num[0];

        for (int i = 1; i < n - 1; i++)
        {
            if ((num[i] + inox) & 1)
                store.push_back({1, i + 1});
            else
                store.push_back({i + 1, n});
        }

        std::cout << store.size() << '\n';
        for (auto i : store)
            std::cout << i.first << " " << i.second << "\n";
    }
}