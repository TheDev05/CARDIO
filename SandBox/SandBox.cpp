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

        int sum = 0;
        for (int i = 0; i <= n; i++)
        {
            if (i & 1)
            {
                sum += sum;
            }
            else
                sum++;
        }

        std::cout << sum  << '\n';
    }
}
