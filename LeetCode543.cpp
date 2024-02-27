/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *  int val;
 *  TreeNode * left;
 *  TreeNode * right;
 *  TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int dfs(TreeNode *root, int &diameter)
        {
            if (root == NULL) return 0;
            int left = dfs(root->left, diameter);
            int right = dfs(root->right, diameter);
            diameter = max(diameter, right + left);
            return max(left, right) + 1;
        }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int diameter = 0;
        dfs(root, diameter);
        return diameter;
    }
};
