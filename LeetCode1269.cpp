class Solution
{
    int mod = pow(10, 9) + 7;
    vector<vector<int>> dp;

public:
    int solve(int pos, int steps, int len)
    {
        if (steps == 0 and pos == 0)
            return 1;
        else if (pos < 0 or pos == len or steps == 0 or pos > steps)
            return 0;
        else if (dp[steps][pos] != -1)
            return dp[steps][pos];
        int ans = 0;
        ans = (ans % mod + solve(pos, steps - 1, len) % mod) % mod;     // stay
        ans = (ans % mod + solve(pos + 1, steps - 1, len) % mod) % mod; // move right
        ans = (ans % mod + solve(pos - 1, steps - 1, len) % mod) % mod; // move left
        dp[steps][pos] = ans % mod;
        return dp[steps][pos];
    }
    int numWays(int steps, int arrLen)
    {
        dp.resize(steps + 1, vector<int>(steps / 2 + 1, -1));
        return solve(0, steps, arrLen);
    }
};