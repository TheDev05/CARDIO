#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text1, text2;
    std::cin >> text1 >> text2;

    std::vector<std::vector<int>> dp(text2.size() + 1, std::vector<int>(text1.size() + 1, 0));
    for (int i = text2.size() - 1; i >= 0; i--)
    {
        for (int j = text1.size() - 1; j >= 0; j--)
        {
            int val1 = 0, val2 = 0;
            if (text2[i] == text1[j])
                val1 = 1 + dp[i + 1][j + 1];
            val2 = std::max(dp[i + 1][j], dp[i][j + 1]);

            dp[i][j] = std::max(val1, val2);
        }
    }

    std::cout << dp[0][0];
}