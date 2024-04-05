class Solution
{
public:
    string removeStars(string s)
    {
        string st = "";
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '*')
            {
                st += s[i];
            }
            else
                st.pop_back();
        }
        return st;
    }
};