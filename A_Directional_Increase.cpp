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

        std::vector<int> temp(n), num;

        int last = -1;
        for (int i = 0; i < n; i++)
        {
            std::cin >> temp[i];

            if (temp[i] != 0)
                last = i;
        }

        for (int i = 0; i < last + 1; i++)
        {
            num.push_back(temp[i]);
        }

        if (n == 1)
        {
            if (temp[0] == 0)
                std::cout << "Yes\n";
            else
                std::cout << "No\n";

            continue;
        }

        if (last == -1)
        {
            std::cout << "Yes\n";
            continue;
        }

        int inox = 0;
        bool ok = true;

        for (int i = 0; i < num.size() - 1; i++)
        {
            if (num[i] < inox)
                inox = inox - num[i];
            else
                inox = -(num[i] - inox);

            if (inox == 0)
                ok = false;
        }

        if (num[num.size() - 1] > 0 || num[0] <= 0)
            ok = false;

        if (inox != num[num.size() - 1])
            ok = false;

        if (ok)
            std::cout << "Yes\n";
        else
            std::cout << "No\n";
    }
}