class Solution
{
public:
    bool isPalindrome(string s)
    {
        int st = 0;
        int en = s.size() - 1;
        while (st < en)
        {
            if (!isalnum(s[st]))
                st++;
            else if (!isalnum(s[en]))
                en--;
            else if (tolower(s[st]) != tolower(s[en]))
                return false;
            else
            {
                st++;
                en--;
            }
        }
        return true;
    }
};