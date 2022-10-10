/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
vector<vector<int>>result;
void get(vector<int>&temp, int index, vector<int>&nums)
{
    if(index == nums.size())
    {
        result.push_back(temp);
    }
    
    temp.push_back(nums[index]);
    get(temp,index+1,nums);
    temp.pop_back();
    
    get(temp, index+1, nums);
}
    
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        
        get(temp,0,nums);
        
        vector<vector<int>>inox;
        inox=result;
        
        return(inox);
    }
};
// @lc code=end

