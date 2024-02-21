#include <bits/stdc++.h>
using namespace std;

/*

Alexa loves movies and maintains a list of negative and/or positive integer ratings for the movies in her
collection. She's getting ready for a film festival and wants to choose some subsequence of movies
from her collection to bring such that the following conditions are satisfied:

• The collective sum of their ratings is maximal.
• She must go through her list in order and cannot skip more than one movie in a row. In other words, she
cannot skip over two or more consecutive movies. For example, if ratings = [-1, -3, -2], she must include
either the second number or the first and third numbers to get a maximal rating sum of -3.

For example, ratings = (-3, 2, 4, -1, -2, -5).. Her maximal choices are [2, 4, -2] for a sum of 4.

*/

int main()
{
    vector<int> ratings = {-1, -2, -3, -4, -5};

    std::vector<std::pair<int, int>> dp(ratings.size() + 1, {0, 0});

    dp[ratings.size() - 1] = {1, ratings[ratings.size() - 1]};
    dp[dp.size() - 1] = {1, 0};

    for (int i = ratings.size() - 2; i >= 0; i--)
    {
        int val1 = INT_MIN, val2 = INT_MIN, val3 = INT_MIN;

        if (i + 1 < dp.size() && dp[i + 1].first)
            val1 = dp[i + 1].second,
            val3 = ratings[i] + dp[i + 1].second;

        if (i + 2 < dp.size() && dp[i + 2].first)
            val2 = ratings[i] + dp[i + 2].second;

        if (val1 > val2 && val1 > val3)
            dp[i] = {0, val1};
        else if (val2 > val1 && val2 > val3)
            dp[i] = {1, val2};
        else
            dp[i] = {1, val3};
    }

    std::cout << dp[0].second;
}
