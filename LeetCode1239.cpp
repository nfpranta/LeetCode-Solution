class Solution
{
public:
    int maxLength(vector<string> &arr)
    {
        vector<int> dp = {0};
        int n = arr.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int checkDupInCurrentString = 0, currentBits = 0;
            for (char ch : arr[i])
            {
                checkDupInCurrentString |= (currentBits & 1 << (ch - 'a'));
                currentBits |= 1 << (ch - 'a');
            }
            if (checkDupInCurrentString > 0)
                continue;
            for (int i = dp.size() - 1; i >= 0; i--) // iterating in reverse due to having size increased if there is not duplication between subsequent string
            {
                if (dp[i] & currentBits)
                    continue;
                dp.push_back(dp[i] | currentBits);
                ans = max(ans, __builtin_popcount(dp[i] | currentBits));
            }
        }
        return ans;
    }
};