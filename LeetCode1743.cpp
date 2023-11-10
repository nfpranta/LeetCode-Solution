class Solution
{
public:
  map<int, vector<int>> m;
  void dfs(int node, int prev, vector<int> &ans)
  {
    ans.push_back(node);
    for (auto neighbour : m[node])
    {
      if (neighbour != prev)
      {
        dfs(neighbour, node, ans);
      }
    }
  }
  vector<int> restoreArray(vector<vector<int>> &adjacentPairs)
  {
    int root;
    for (auto it : adjacentPairs)
    {
      m[it[0]].push_back(it[1]);
      m[it[1]].push_back(it[0]);
    }
    for (auto it : m)
    {
      if (it.second.size() == 1)
      {
        root = it.first;
        break;
      }
    }
    vector<int> ans;
    dfs(root, -1, ans);
    return ans;
  }
};