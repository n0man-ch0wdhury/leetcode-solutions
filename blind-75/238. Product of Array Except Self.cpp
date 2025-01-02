class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int z = 0;
        int n = nums.size();
        long long int res = 1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
                z++;
            else
            {
                res *= nums[i];
            }
        }
        if (z > 1)
        {
            for (int i = 0; i < n; i++)
                nums[i] = 0;
            return nums;
        }
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                nums[i] = res;
            }
            else
            {
                if (z)
                    nums[i] = 0;
                else
                    nums[i] = res / nums[i];
            }
        }
        return nums;
    }
};