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
  pair<int, int> dfs(TreeNode *node, int &ans)
  {
    if (node == nullptr)
      return {0, 0};
    pair<int, int> left = dfs(node->left, ans);
    pair<int, int> right = dfs(node->right, ans);
    int sum = node->val + left.first + right.first;
    int cnt = 1 + left.second + right.second;
    if (sum / cnt == node->val)
      ans++;
    return {sum, cnt};
  }
  int averageOfSubtree(TreeNode *root)
  {
    int ans = 0;
    dfs(root, ans);
    return ans;
  }
};