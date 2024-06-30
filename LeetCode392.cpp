class Solution
{
    public:
        bool isSubsequence(string s, string t)
        {
            if (s.size() == 0) return true;
            int n = s.size();
            int m = t.size();
            int cnt = 0;
            int i = 0, j = 0;
            while (i < n and j < m)
            {
                if (s[i] == t[j])
                {
                    i++;
                    j++;
                    cnt++;
                }
                else j++;
                if (cnt == n) return true;
            }
            return false;
        }
};
