#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int k;
    std::cin >> k;

    std::vector<std::vector<int>> dp(num.size() + 1, std::vector<int>(k + 1, 1e5));
    dp[dp.size() - 1][0] = 0;

    for (int i = num.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < dp[0].size(); j++)
        {
            int val1 = INT_MAX, val2 = INT_MAX;
            if (j - num[i] >= 0)
                val1 = 1 + dp[i][j - num[i]];

            val2 = dp[i + 1][j];

            dp[i][j] = std::min(val1, val2);
        }
    }

    std::cout << dp[0].back();
}