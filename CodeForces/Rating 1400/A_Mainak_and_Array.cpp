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
        for (int i = 0; i < n; i++)
        {
            std::cin >> num[i];
        }

        if (n == 1)
        {
            std::cout << "0\n";
            continue;
        }

        int result = num[n - 1] - num[0];
        for (int i = 0; i < n - 1; i++)
        {
            result = std::max(result, num[i] - num[i + 1]);
        }

        int val1 = num[n - 1] - *min_element(num.begin(), num.end() - 1);
        int val2 = *max_element(num.begin() + 1, num.end()) - num[0];

        std::cout << std::max(result, std::max({val1, val2})) << '\n';
    }
}