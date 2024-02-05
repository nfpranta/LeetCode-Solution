class Solution
{
public:
    int firstUniqChar(string s)
    {
        int ind[26];
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            ind[s[i] - 'a'] = i;
        }
        for (int i = 0; i < n; i++)
        {
            if (ind[s[i] - 'a'] == i)
            {
                return i;
            }
            else
                ind[s[i] - 'a'] = -1;
        }
        return -1;
    }
};