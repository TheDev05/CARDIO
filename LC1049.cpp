#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int sum = accumulate(begin(num), end(num), 0);
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(sum + 1, 0));

    dp[dp.size() - 1][0] = 1;

    for (int i = num.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < dp[0].size(); j++)
        {
            int val1 = 0, val2 = 0;
            if (j - num[i] >= 0)
                val1 = dp[i + 1][j - num[i]];
            val2 = dp[i + 1][j];

            dp[i][j] = val1 | val2;
        }
    }

    int delta = INT_MAX;
    for (int i = 0; i < dp[0].size(); i++)
    {
        if (dp[0][i])
            delta = std::min(delta, std::abs(i - (sum - i)));
    }

    std::cout << delta;
}