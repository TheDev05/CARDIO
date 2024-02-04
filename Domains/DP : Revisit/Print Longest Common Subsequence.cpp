#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text1, text2;
    std::cin >> text1 >> text2;

    std::vector<std::vector<int>> dp(text1.size() + 1, std::vector<int>(text2.size() + 1, 0));
    for (int i = text1.size() - 1; i >= 0; i--)
    {
        for (int j = text2.size() - 1; j >= 0; j--)
        {
            int val1 = 0, val2 = 0;
            if (text1[i] == text2[j])
                val1 = 1 + dp[i + 1][j + 1];
            else
                val2 = std::max(dp[i][j + 1], dp[i + 1][j]);

            dp[i][j] = std::max(val1, val2);
        }
    }

    std::string res;
    int row = 0, col = 0;

    while (row >= 0 && row < text1.size() && col >= 0 && col < text2.size())
    {
        if (text1[row] == text2[col])
            res += text1[row], row++, col++;
        else if (dp[row + 1][col] > dp[row][col + 1])
            row++;
        else
            col++;
    }

    std::cout << res;
}