class Solution
{
public:
    char repeatedCharacter(string s)
    {
        int ind[26];
        memset(ind, -1, sizeof ind);
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (ind[s[i] - 'a'] >= 0)
            {
                return s[i];
            }
            else
                ind[s[i] - 'a'] = i;
        }
        return 'a';
    }
};