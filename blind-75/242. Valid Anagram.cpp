class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int ms[26] = {}, mt[26] = {};
        int n = s.size();
        int m = t.size();
        if (n != m)
            return false;

        for (auto x : s)
        {
            ms[x - 'a']++;
        }
        for (auto x : t)
        {
            mt[x - 'a']++;
        }
        bool ok = true;
        for (int i = 0; i < 26; i++)
        {
            if (ms[i] != mt[i])
            {
                ok = false;
                break;
            }
        }
        return ok;
    }
};