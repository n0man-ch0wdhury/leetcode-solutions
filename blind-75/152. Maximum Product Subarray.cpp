class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int mx = INT_MIN;
        int mul = 1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            mul *= nums[i];
            mx = max(mx, mul);

            if (mul == 0)
                mul = 1;
        }
        mul = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            mul *= nums[i];
            mx = max(mx, mul);

            if (mul == 0)
                mul = 1;
        }

        return mx;
    }
};