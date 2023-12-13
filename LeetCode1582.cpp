class Solution
{
public:
  int numSpecial(vector<vector<int>> &mat)
  {
    int m = mat.size();
    int n = mat[0].size();
    vector<int> rowCount(m, 0);
    vector<int> colCount(n, 0);
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (mat[i][j] == 0)
          continue;
        rowCount[i]++;
        colCount[j]++;
      }
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (mat[i][j] == 0)
          continue;
        if (rowCount[i] == 1 and colCount[j] == 1)
          ans++;
      }
    }
    return ans;
  }
};