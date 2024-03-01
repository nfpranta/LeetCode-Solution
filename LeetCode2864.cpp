class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        int n = s.size();
        int cnt = count(s.begin(), s.end(), '1');
        for (int i = 0; i < n; i++)
        {
            if (i < cnt - 1)
            {
                s[i] = '1';
            }
            else if (i == n - 1)
            {
                s[i] = '1';
            }
            else
                s[i] = '0';
        }
        return s;
    }
};