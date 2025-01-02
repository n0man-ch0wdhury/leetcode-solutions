class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int sz = nums.size();

        unordered_map<int, int> mp;
        set<int> st;
        for (int i = 0; i < sz; i++)
        {
            mp[nums[i]]++;
            st.insert(nums[i]);
        }

        int mx = 0, cn = 1;
        for (auto x : st)
        {
        }
    }
};