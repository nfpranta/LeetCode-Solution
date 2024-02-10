class Solution
{
public:
    int chk(int l, int r, string s)
    {
        int cnt = 0;
        while (l >= 0 and r < s.size() and s[r] == s[l])
        {
            l--;
            r++;
            cnt++;
        }
        return cnt;
    }
    int countSubstrings(string s)
    {
        int n = s.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += chk(i, i, s);     // odd length
            ans += chk(i, i + 1, s); // even length
        }
        return ans;
    }
};