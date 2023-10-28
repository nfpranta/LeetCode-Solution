class Solution
{
public:
    int lengthOfLongestSubsequence(vector<int> &nums, int target)
    {
        int n = nums.size();
        int dp[n + 1][target + 1];
        for (int i = 0; i < n + 1; i++)
        {
            for (int j = 0; j < target + 1; j++)
            {
                if (i == 0)
                    dp[i][j] = INT_MIN;
                if (j == 0)
                    dp[i][j] = 0;
            }
        }

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < target + 1; j++)
            {
                if (nums[i - 1] <= j)
                {
                    dp[i][j] = max(1 + dp[i - 1][j - nums[i - 1]], dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        if (dp[n][target] < 0)
            return -1;
        return dp[n][target];
    }
};