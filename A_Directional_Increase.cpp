#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> num(n), temp;

        int pos = 0, neg = 0, right = 0;
        for (auto &i : num)
        {
            std::cin >> i;

            if (i != 0)
                temp.push_back(i);

            if (i > 0)
                pos += i;
            else
                neg += i;
        }

        if (n == 1)
        {
            if (num[0] == 0)
                std::cout << "Yes\n";
            else
                std::cout << "No\n";

            continue;
        }

        if (temp.size() == 0)
        {
            std::cout << "Yes\n";
            continue;
        }

        bool ok = true;
        if (temp[temp.size() - 1] > 0 || num[0] <= 0 || pos + neg != 0 || temp[0] + temp[1] == 0 || temp[n - 1] + temp[n - 2] == 0)
            ok = false;

        if (ok)
            std::cout << "Yes\n";
        else
            std::cout << "No\n";
    }
}