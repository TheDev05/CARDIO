#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(3, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    std::vector<std::vector<int>> dp(n, std::vector<int>(3, 0));
    dp[num.size() - 1] = num[num.size() - 1];

    for (int i = num.size() - 2; i >= 0; i--)
    {
        int val1 = 0, val2 = 0, val3 = 0;
        val1 = std::max({dp[i + 1][0], std::max(dp[i + 1][1] + num[i][0], dp[i + 1][2] + num[i][0])});
        val2 = std::max({dp[i + 1][1], std::max(dp[i + 1][0] + num[i][1], dp[i + 1][2] + num[i][1])});
        val3 = std::max({dp[i + 1][2], std::max(dp[i + 1][0] + num[i][2], dp[i + 1][1] + num[i][2])});

        std::cout << val1 << " " << val2 << " " << val3 << '\n';
        dp[i] = {val1, val2, val3};
    }

    std::cout << *max_element(dp[0].begin(), dp[0].end());
}