class Solution
{
public:
    bool isPalindrome(string s)
    {
        string tm;
        for (auto x : s)
        {
            if (isalpha(x) || isdigit(x))
            {
                tm.push_back(tolower(x));
            }
        }
        int n = tm.size();

        for (int i = 0; i < n / 2; i++)
        {
            if (tm[i] != tm[n - i - 1])
                return false;
        }
        return true;
    }
};