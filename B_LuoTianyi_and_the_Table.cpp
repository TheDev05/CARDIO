#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, m;
        std::cin >> n >> m;

        std::vector<int> num(n * m);

        int min = INT_MAX, max = INT_MIN, max2 = INT_MIN, min2 = n, min3 = INT_MAX;
        for (int i = 0; i < n * m; i++)
        {
            std::cin >> num[i];

            min = std::min(min, num[i]);
            max = std::max(max, num[i]);
        }

        if (m < n)
            min2 = m;

        sort(num.begin(), num.end(), greater<int>());

        max2 = num[1];
        min3 = num[(n * m) - 2];

        int sum1 = (max - min) * ((n * m) - min2);
        int sum2 = sum1 + ((max - min3) * (min2 - 1));

        sum1 += (max2 - min) * (min2 - 1);

        if (max == min)
        {
            sum1 = 0;
            sum2 = 0;
        }

        std::cout << std::max(sum1, sum2) << '\n';
    }
}