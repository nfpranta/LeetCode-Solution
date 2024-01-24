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
    int cnt = 0;
    int dfs(TreeNode *root, int value)
    {
        if (root == nullptr)
        {
            return 0;
        }
        value ^= (1 << root->val);
        if (root->left == nullptr and root->right == nullptr)
        {
            return (value & (value - 1)) == 0; // checks if the bit is reset for both even and odd pseudo-palindromic sequence through checking if value is 0 for even and if the value is power of 2 for odd because that means one number is set equivalent to that bit being set.
        }
        return dfs(root->left, value) + dfs(root->right, value);
    }
    int pseudoPalindromicPaths(TreeNode *root)
    {
        return dfs(root, 0);
    }
};