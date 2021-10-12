
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

        int count = 0, result = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            int val;
            std::cin >> val;

            if (val % 2 == 0)
            {
                count++;
            }

            if (val % 2 != 0 || i == n - 1)
            {
                result = std::max(result, count);
                count = 0;
            }
        }

        std::cout << result << '\n';
    }
}