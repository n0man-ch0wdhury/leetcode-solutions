class Solution
{
public:
    int waysToSplitArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<long long> pre(n);
        pre[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + nums[i];
        }

        int cn = 0;

        if (pre[0] >= (pre[n - 1] - pre[0]))
            cn++;

        for (int i = 1; i < n - 1; i++)
        {
            if (pre[i] >= pre[n - 1] - pre[i])
            {
                cn++;
            }
        }
        return cn;
    }
};