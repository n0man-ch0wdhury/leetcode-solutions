class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int l = 0, r = 0;
        int res = 0;
        unordered_set<char> st;
        while (l < n && r < n)
        {
            if (st.find(s[r]) == st.end())
            {
                st.insert(s[r]);
                // cout << s[r] << endl;
                res = max(res, r - l + 1);
                // cout << res << endl;
                r++;
                // r++;
            }
            else
            {
                // cout <<
                st.erase(s[l]);
                l++;
            }
        }
        return res;
    }
};