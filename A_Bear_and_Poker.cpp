#include <bits/stdc++.h>
using namespace std;

#define ll long long

int32_t main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, x, a;
        std::cin >> n >> x;

        std::set<int> s;
        for (int i = 0; i < n; i++)
        {
            std::cin >> a;
            s.insert(a);
        }

        int i = 1, c = 0;
        for (auto y : s)
        {
            if (i != y)
            {
                c += y - i;
                i = y;
                if (c > x)
                    break;
            }

            i++;
        }

        std::cout << i - c + x - 1 << "\n";
    }
}