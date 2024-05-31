class Solution
{
public:
    string reverseWords(string s)
    {
        int pos = 0;
        string word = "";
        string ans = "";
        int n = s.size();
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != ' ')
            {
                if (flag)
                {
                    ans = " " + ans;
                    flag = false;
                }
                word += s[i];
            }
            else if (word.size() > 0)
            {
                ans = word + ans;
                word = "";
                flag = true;
            }
        }
        if (word.size() > 0)
        {
            ans = word + ans;
            word = "";
        }
        return ans;
    }
};