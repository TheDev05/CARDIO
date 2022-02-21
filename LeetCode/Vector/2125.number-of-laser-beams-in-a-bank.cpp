/*
 * @lc app=leetcode id=2125 lang=cpp
 *
 * [2125] Number of Laser Beams in a Bank
 */

// @lc code=start
class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {

        vector<int> num;
        for (int i = 0; i < bank.size(); i++)
        {
            int val = count(bank.begin(), bank.end(), '1');

            if (val > 0)
            {
                num.push_back(val) l
            }
        }

        int sum = 0;
        for (int i = 0; i < num.size() - 1; i++)
        {
            sum += (num[i] * num[i + 1]);
        }

        return(sum);
    }
};
// @lc code=end
