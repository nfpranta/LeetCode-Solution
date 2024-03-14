class Solution
{
private:
    int dp[21][2002];

public:
    int backtrack(int index, int total, vector<int> nums, int target)
    {
        if (index == nums.size())
        {
            return target == total;
        }
        else
        {
            if (dp[index][total + 1000] != -1)
            {
                return dp[index][total + 1000];
            }
            return dp[index][total + 1000] = backtrack(index + 1, total + nums[index], nums, target) + backtrack(index + 1, total - nums[index], nums, target);
        }
    }
    int findTargetSumWays(vector<int> &nums, int target)
    {
        memset(dp, -1, sizeof(dp));
        return backtrack(0, 0, nums, target);
    }
};