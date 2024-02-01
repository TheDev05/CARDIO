#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string text;
    std::cin >> text;

    std::string temp = text;
    reverse(temp.begin(), temp.end());

    std::vector<std::vector<int>> dp(text.size() + 1, std::vector<int>(temp.size() + 1, 0));
    for (int i = text.size() - 1; i >= 0; i--)
    {
        for (int j = temp.size() - 1; j >= 0; j--)
        {
            if (text[i] == temp[j])
                dp[i][j] = 1 + dp[i + 1][j + 1];
        }
    }

    int max = 0, row = 0, col = 0;
    for (int i = 0; i < text.size(); i++)
    {
        for (int j = 0; j < temp.size(); j++)
        {
            if (dp[i][j] > max)
            {
                max = dp[i][j];
                row = i;
                col = j;
            }
        }
    }

    for (auto i : dp)
    {
        for (auto j : i)
            std::cout << j << " ";
        std::cout << '\n';
    }

    std::string res;
    while (row >= 0 && row < text.size() && col >= 0 && col < temp.size())
    {
        if (dp[row][col])
            res += text[row];
        else
            break;

        row++;
        col++;
    }

    std::cout << '\n';
    std::cout << text << " " << temp;

    // std::cout << res;
}