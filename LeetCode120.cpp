// Top Down Approach
class Solution
{
public:
  int minimumTotal(vector<vector<int>> &triangle)
  {
    int sum = 0;
    int n = triangle.size();
    int ans = 3000000;
    if (n == 1)
      return triangle[0][0];
    for (int i = 0; i < n - 1; i++)
    {
      int m = triangle[i + 1].size();
      for (int j = 0; j < m; j++)
      {
        if (j == 0)
          triangle[i + 1][j] += triangle[i][j];
        else if (j == m - 1)
          triangle[i + 1][j] += triangle[i][j - 1];
        else
          triangle[i + 1][j] += min(triangle[i][j], triangle[i][j - 1]);
        if (i == n - 2)
          ans = min(ans, triangle[i + 1][j]);
      }
    }
    return ans;
  }
};

// Bottom Up Approach

// class Solution
// {
// public:
//   int minimumTotal(vector<vector<int>> &triangle)
//   {
//     int sum = 0;
//     int n = triangle.size();
//     for (int i = n - 1; i > 0; i--)
//     {
//       int m = triangle[i].size();
//       for (int j = 0; j < m - 1; j++)
//       {
//         triangle[i - 1][j] += min(triangle[i][j], triangle[i][j + 1]);
//       }
//     }
//     return triangle[0][0];
//   }
// };