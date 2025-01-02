class Solution
{
public:
    bool close(char ch)
    {
        if (ch == ')' || ch == '}' || ch == ']')
            return true;
        return false;
    }
    bool isValid(string s)
    {
        stack<char> st;
        int n = s.size();
        if (n & 1)
            return false;

        st.push(s[0]);
        for (int i = 1; i < n; i++)
        {
            if (st.empty() && close(s[i]))
                return false;

            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else
            {
                if (s[i] == ')' && st.top() == '(')
                {
                    st.pop();
                }
                else if (s[i] == '}' && st.top() == '{')
                {
                    st.pop();
                }
                else if (s[i] == ']' && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        if (st.empty())
            return true;
        return false;
    }
};