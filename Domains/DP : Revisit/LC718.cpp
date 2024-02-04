#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<int> num1(n), num2(m);
    for (auto &i : num1)
        std::cin >> i;

    for (auto &i : num2)
        std::cin >> i;

    std::vector<std::vector<int>> dp(num1.size() + 1, std::vector<int>(num2.size() + 1, 0));
    for (int i = num1.size() - 1; i >= 0; i--)
    {
        for (int j = num2.size() - 1; j >= 0; j--)
        {
            int val = 0;
            if (num1[i] == num2[j])
                val = 1 + dp[i + 1][j + 1];

            dp[i][j] = val;
        }
    }

    int max = 0;
    for (auto i : dp)
        for (auto j : i)
            max = std::max(max, j);

    std::cout << max;
}