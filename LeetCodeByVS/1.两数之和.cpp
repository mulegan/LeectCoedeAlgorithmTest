/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include <unordered_map>
#include <vector>
#include <iostream>

using namespace ::std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> Temp;
        for (auto i = 0; i != nums.size(); i++)
        {
            if (Temp.find(target - nums[i]) != Temp.end())
            {
                return {Temp[target - nums[i]], i};
            }

            Temp[nums[i]] = i;
        }
        return {};
    }
};

// @lc code=end
