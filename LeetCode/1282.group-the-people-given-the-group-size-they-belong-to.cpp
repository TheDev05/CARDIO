/*
 * @lc app=leetcode id=1282 lang=cpp
 *
 * [1282] Group the People Given the Group Size They Belong To
 */

// @lc code=start


	class Solution
	{
	public:
		vector<vector<int>> groupThePeople(vector<int> &groupSizes)
		{
			map<int, vector<int>> data;
			for (int i = 0; i < groupSizes.size(); i++)
			{
				data[groupSizes[i]].push_back(i);
			}

			vector<vector<int>> result;
			for (auto j : data)
			{
				vector<int> temp;
				for (int i = 0; i < j.second.size(); i++)
				{
					temp.push_back(j.second[i]);

					if (temp.size() == j.first)
					{
						result.push_back(temp);
						temp.clear();
					}
				}
			}

			return (result);
		}
	};

// @lc code=end
