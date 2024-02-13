class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {
        int n = words.size();
        for (int i = 0; i < n; i++)
        {
            string t = words[i];
            reverse(t.begin(), t.end());
            if (words[i] == t)
                return words[i];
        }
        return "";
    }
};