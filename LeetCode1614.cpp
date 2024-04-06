class Solution
{
public:
    int maxDepth(string s)
    {
        int mx = 0;
        stack<int> st;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                st.push(1);
                mx = max(mx, (int)st.size());
            }
            else if (s[i] == ')')
            {
                st.pop();
            }
        }
        return mx;
    }
};