#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::vector<int> dp(n, 0);
    for (int i = num.size() - 1; i >= 0; i--)
    {
        int next = INT_MIN, nextNext = num[i];
        if (i + 1 < num.size())
            next = dp[i + 1];
        if (i + 2 < num.size())
            nextNext += dp[i + 2];

        dp[i] = std::max(next, nextNext);
    }

    std::cout << dp[0];
}