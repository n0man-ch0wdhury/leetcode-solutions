class Solution
{
public:
    bool isVowel(char ch)
    {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
    {
        int n = words.size();
        vector<int> pre(n);
        pre[0] = 0;
        if (isVowel(words[0][0]) && isVowel(words[0][words[0].size() - 1]))
        {
            pre[0] = 1;
        }
        for (int i = 1; i < n; i++)
        {
            auto x = words[i];
            int len = x.size();
            if (isVowel(x[0]) && isVowel(x[len - 1]))
                pre[i] = pre[i - 1] + 1;
            else
                pre[i] = pre[i - 1];
        }

        vector<int> res;
        for (auto x : queries)
        {
            int l = x[0], r = x[1];
            if (l == 0)
            {
                res.push_back(pre[r]);
            }
            else
            {
                res.push_back(pre[r] - pre[l - 1]);
            }
        }
        return res;
    }
};