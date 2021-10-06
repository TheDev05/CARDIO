#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        long long num[n], sum1 = 0, sum2 = 0;
        
        for (int i = 0; i < n; i++)
        {
            std::cin >> num[i];

            if (i % 2 == 0)
            {
                sum1 += num[i];
            }
            else
                sum2 += num[i];
        }

        std::cout << std::max(sum1, sum2) << '\n';
    }
}