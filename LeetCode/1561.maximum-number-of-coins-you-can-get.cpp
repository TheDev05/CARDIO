/*
 * @lc app=leetcode id=1561 lang=cpp
 *
 * [1561] Maximum Number of Coins You Can Get
 */

// @lc code=start
class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        sort(piles.begin(), piles.end(), greater<>());
        int sum = 0, size = piles.size() / 3;

        for (int i = 0; i < size; i++)
        {
            if (i & 1)
            {
                sum += piles[i];
            }
        }

        return (sum);
    }
};
// @lc code=end