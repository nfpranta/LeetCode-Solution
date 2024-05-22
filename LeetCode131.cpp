class Solution
{
public:
    vector<vector<string>> result;
    vector<string> part;
    bool palindrome(string s, int l, int r)
    {
        while (l < r)
        {
            if (s[l] != s[r])
                return false;
            else
                l++, r--;
        }
        return true;
    }
    void dfs(int index, string s)
    {
        if (index >= s.size())
        {
            result.push_back(part);
            return;
        }
        for (int j = index; j < s.size(); j++)
        {
            if (palindrome(s, index, j))
            {
                string tmp = "";
                for (int k = index; k <= j; k++)
                {
                    tmp += s[k];
                }
                part.push_back(tmp);
                dfs(j + 1, s);
                part.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s)
    {
        dfs(0, s);
        return result;
    }
};