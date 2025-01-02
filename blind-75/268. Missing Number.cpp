class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size(), sum = 0;
        for (auto x : nums)
        {
            sum += x;
        }
        int res = n * (n + 1) / 2;
        return res - sum;
    }
};