class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        int n = s.size();
        int m = t.size();
        int c1 = 0;
        int c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '#')
            {

                s[c1] = s[i];
                c1++;
            }
            else
            {
                c1--;
                c1 = max(0, c1);
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (t[i] != '#')
            {

                t[c2] = t[i];
                c2++;
            }
            else
            {
                c2--;
                c2 = max(0, c2);
            }
        }
        if (c1 != c2)
            return false;
        for (int i = 0; i < c1; i++)
        {
            if (s[i] != t[i])
                return false;
        }
        return true;
    }
};