class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        int openParan = 0;
        vector<char> v(s.begin(), s.end());
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (v[i] == '(')
            {
                openParan++;
            }
            else if (v[i] == ')')
            {
                if (openParan == 0)
                {
                    v[i] = '*';
                }
                else
                    openParan--;
            }
        }
        if (openParan > 0)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (openParan == 0)
                    break;
                else if (openParan > 0 and v[i] == '(')
                {
                    v[i] = '*';
                    openParan--;
                }
            }
        }
        string ans = "";
        for (auto it : v)
        {
            if (it != '*')
            {
                ans += it;
            }
        }
        return ans;
    }
};