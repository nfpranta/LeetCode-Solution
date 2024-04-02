class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> m;
        unordered_map<char, char> n;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]] = t[i];
            n[t[i]] = s[i];
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (m[s[i]] == t[i] and n[t[i]] == s[i])
                continue;
            return false;
        }
        return true;
    }
};