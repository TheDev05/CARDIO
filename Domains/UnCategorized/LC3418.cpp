#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> num(n, std::vector<int>(m, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    std::vector<int> num1(num.size() + 1, 0), num2(num.size() + 1, 0);
    int sum = 0, diff = 0;
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1, 0));

    for (int i = num.size() - 1; i >= 0; i--)
    {
        for (int j = num[0].size() - 1; j >= 0; j--)
        {
            int val1 = 0, val2 = 0;
            if (i + 1 < num.size() && j + 1 < num[0].size())
            {
                dp[i][j] = num[i][j] + std::max(dp[i][j + 1], dp[i + 1][j]);
            }
            else if (j + 1 < num[0].size())
                dp[i][j] = num[i][j] + dp[i][j + 1];
            else
                dp[i][j] = num[i][j] + dp[i + 1][j];
        }
    }

    for (auto i : dp)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }

    sum = dp[0][0];

    std::vector<int> temp(2, 0);
    int i = 0, j = 0;

    while (i < num.size() && j < num[0].size())
    {
        if (num[i][j] < 0)
            // std::cout << num[i][j],
                temp.push_back(num[i][j]);

        if (i + 1 < num.size() && j + 1 < num[0].size())
        {
            std::cout << dp[i + 1][j] << " " << dp[i][j + 1] << '\n';
            if (dp[i + 1][j] > dp[i][j + 1])
                i++;
            else
                j++;
        }
        else if (i + 1 < num.size())
            i++;
        else
            j++;
    }

    std::cout << "I: " << " " << i << " " << j;

    std::sort(begin(temp), end(temp));
    std::cout << sum + std::abs(temp[0] + temp[1]);

    for (auto i : temp)
        std::cout << i << " ";
}

/*
[[-3,14,-3,5],[13,-20,12,1],[-10,-3,20,-6],[-14,8,18,9]]

-3  14  -3   5
13 -20  12  1
-10 -3  20 -6
-14  8  18  9

[[-7,12,12,13],[-6,19,19,-6],[9,-2,-10,16],[-4,14,-10,-9]]

-7 12 12 13
-6 19 19 -6
9 -2 -10 16
-4 14 -10 -9

[[0,9,-4,9,7],[16,-5,20,19,16],[1,12,-15,-2,-8],[-4,-7,-18,-4,-3],[0,5,-17,13,-18]]

0   9 -4  9  7
16 -5  20 19 16
1  12 -15 -2 -8
-4 -7 -18 -4 -3
0   5 -17 13 -18

*/