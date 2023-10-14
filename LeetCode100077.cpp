class Solution
{
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string> &words, vector<int> &groups)
    {
        int mxi = 0;
        vector<string> ans;
        int mx = 1;
        int dp[1004];
        int from[1004];
        if (n == 1)
        {
            return words;
        }
        string w = words[0];
        for (int i = 0; i < n; i++)
        {
            dp[i] = 1;
            from[i] = -1;
            for (int j = 0; j < i; j++)
            {
                int c = 0;
                if (groups[i] != groups[j] and words[i].size() == words[j].size())
                {
                    for (int k = 0; k < words[i].size(); k++)
                    {
                        if (words[i][k] != words[j][k])
                        {
                            c++;
                        }
                        if (c > 1)
                            break;
                    }
                    if (c == 1 and dp[j] >= dp[i])
                    {
                        dp[i] = dp[j] + 1;
                        from[i] = j;
                    }
                }
            }
            if (dp[i] > mx)
            {
                mx = dp[i];
                mxi = i;
            }
        }
        int now = mxi;
        while (now != -1)
        {
            ans.push_back(words[now]);
            now = from[now];
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};