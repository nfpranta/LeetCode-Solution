/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
  void dfs(TreeNode *node, vector<int> &ans)
  {
    if (node == nullptr)
      return;
    // inorder traversal inserts nodes in sorted order
    dfs(node->left, ans);
    ans.push_back(node->val);
    dfs(node->right, ans);
  }
  vector<int> findMode(TreeNode *root)
  {
    vector<int> val, ans;
    dfs(root, val);
    int cnt = 0;
    int mxcnt = 0;
    int curNum = 0;
    for (int i = 0; i < val.size(); i++)
    {
      if (val[i] == curNum)
      {
        cnt++;
      }
      else
      {
        cnt = 1;
        curNum = val[i];
      }
      if (cnt > mxcnt)
      {
        mxcnt = cnt;
        ans = {};
      }
      if (cnt == mxcnt)
      {
        ans.push_back(curNum);
      }
    }
    return ans;
  }
};