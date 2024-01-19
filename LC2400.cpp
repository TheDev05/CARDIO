#include <bits/stdc++.h>
using namespace std;

int traverse(int start, std::vector<std::vector<int>> &dp, int end, int k)
{
    if (start == end && k == 0)
        dp[start][k] = 1;
    else if (k == 0)
        dp[start][k] = 0;

    if (dp[start][k] == -1)
    {
        int left = 0, right = 0;
        left = traverse(start + 1, dp, end, k - 1);
        right = traverse(start - 1, dp, end, k - 1);

        dp[start][k] = left + right;
    }

    return dp[start][k];
}

int main()
{
    int start, end, k;
    std::cin >> start >> end >> k;
    std::vector<std::vector<int>> dp(k, std::vector<int>(k + 1, -1));
    std::cout << traverse(start, dp, end, k);

    for (auto i : dp)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }
}