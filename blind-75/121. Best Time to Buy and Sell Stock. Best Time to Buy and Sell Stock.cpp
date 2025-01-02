class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mx = prices[0], res = 0;
        for (auto x : prices)
        {
            mx = min(mx, x);
            res = max(res, x - mx);
        }
        return res;
    }
};