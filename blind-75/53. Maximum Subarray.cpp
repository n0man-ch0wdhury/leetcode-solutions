class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0, mx = *max_element(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            if (sum + nums[i] > 0)
            {
                sum += nums[i];
                mx = max(sum, mx);
            }
            else
            {
                sum = 0;
            }
        }
        return mx;
    }
};