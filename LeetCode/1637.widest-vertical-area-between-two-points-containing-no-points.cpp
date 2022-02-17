/*
 * @lc app=leetcode id=1637 lang=cpp
 *
 * [1637] Widest Vertical Area Between Two Points Containing No Points
 */

// @lc code=start
class Solution
{
public:
    int maxWidthOfVerticalArea(vector<vector<int>> &points)
    {
        multiset<int> num;
        for (int i = 0; i < points.size(); i++)
        {
            num.insert(points[i][0]);
        }

        int max = INT_MIN;
        for (int i = 0; i < num.size() - 1; i++)
        {
            max = std::max(num[i] - num[i + 1]);
        }

        return(max);
    }
};
// @lc code=end
