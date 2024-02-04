#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n + 1, 0);
    for (int i = 1; i < num.size(); i++)
        std::cin >> num[i];

    int k = n;

    std::vector<std::vector<int>> dp(num.size() + 1, std::vector<int>(k + 1, 0));
    for (int i = num.size() - 1; i >= 1; i--)
    {
        for (int j = 0; j < dp[0].size(); j++)
        {
            int val1 = 0, val2 = 0;
            if (j - i >= 0)
                val1 = num[i] + dp[i][j - i];
            val2 = dp[i + 1][j];

            dp[i][j] = std::max(val1, val2);
        }
    }

    std::cout << dp[1].back();
}