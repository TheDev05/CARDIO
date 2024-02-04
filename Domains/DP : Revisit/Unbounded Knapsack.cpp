#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> weight(n), value(n);

    for (auto &i : weight)
        std::cin >> i;
    for (auto &i : value)
        std::cin >> i;

    int capacity;
    std::cin >> capacity;

    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(capacity + 1, 0));
    dp[dp.size() - 1][0] = 0;

    for (int i = weight.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < dp[0].size(); j++)
        {
            int val1 = 0, val2 = 0;
            if (j - weight[i] >= 0)
                val1 = value[i] + dp[i][j - weight[i]];
            val2 = dp[i + 1][j];

            dp[i][j] = std::max(val1, val2);
        }
    }

    std::cout << dp[0].back();
}