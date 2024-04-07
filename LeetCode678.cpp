class Solution
{
public:
    bool checkValidString(string s)
    {
        int mnleft = 0;
        int mxleft = 0;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                mnleft++;
                mxleft++;
            }
            else if (s[i] == ')')
            {
                mnleft--;
                mxleft--;
            }
            else
            {
                mnleft--;
                mxleft++;
            }
            if (mxleft < 0)
                return false;
            if (mnleft < 0)
                mnleft = 0;
        }
        return mnleft == 0;
    }
};