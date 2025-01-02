class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;
        int sz = nums.size();
        for (int i = 0; i < sz; i++)
        {
            mp[nums[i]] = i + 1;
        }
        vector<int> res;
        for (int i = 0; i < sz; i++)
        {
            if (mp[target - nums[i]] && mp[target - nums[i]] != i + 1)
            {
                res.push_back(i);
                res.push_back(mp[target - nums[i]] - 1);
                break;
            }
        }

        return res;
    }
};