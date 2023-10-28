class Solution
{
public:
    int minChanges(string s)
    {
        int cnt = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (i % 2 and s[i] != s[i - 1])
                cnt++;
        }
        return cnt;
    }
};