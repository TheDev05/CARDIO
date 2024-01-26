#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int delta;
    std::cin >> delta;

    int sum = accumulate(begin(num), end(num), 0);
    std::vector<std::vector<std::pair<int, int>>> dp(num.size() + 1, std::vector<std::pair<int, int>>(sum + 1, {0, 0}));

    // true, count
    dp[dp.size() - 1][0] = {1, 1};

    int mod = 1e9 + 7;
    for (int i = num.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < dp[0].size(); j++)
        {
            int val1 = 0, val2 = 0;
            if (j - num[i] >= 0)
                val1 = dp[i + 1][j - num[i]].first;
            val2 = dp[i + 1][j].first;

            int temp = 0;

            if (val1)
                temp += dp[i + 1][j - num[i]].second % mod,
                    temp = temp % mod;
            if (val2)
                temp += dp[i + 1][j].second % mod,
                    temp = temp % mod;

            dp[i][j] = {(val1 | val2), temp};
        }
    }

    int count = 0;
    for (int i = 0; i < dp[0].size(); i++)
    {
        if (dp[0][i].first && i - (sum - i) == delta)
            count += dp[0][i].second;
    }

    // std::cout << count;
}