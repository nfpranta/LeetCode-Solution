class Solution
{
public:
  int minFallingPathSum(vector<vector<int>> &matrix)
  {
    int r = matrix.size();
    int dp[r + 1][r + 1];
    int ans = 10000;
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < r; j++)
      {
        if (i == 0)
        {
          dp[i][j] = matrix[i][j];
        }
        else if (j == 0)
        {
          dp[i][j] = matrix[i][j] + min(dp[i - 1][j], dp[i - 1][j + 1]);
        }
        else if (j == r - 1)
        {
          dp[i][j] = matrix[i][j] + min(dp[i - 1][j], dp[i - 1][j - 1]);
        }
        else
        {
          dp[i][j] = matrix[i][j] + min({dp[i - 1][j], dp[i - 1][j + 1], dp[i - 1][j - 1]});
        }
        if (i == r - 1)
        {
          ans = min(ans, dp[i][j]);
        }
      }
    }
    return ans;
  }
};