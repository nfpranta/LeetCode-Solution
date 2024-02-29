/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
public:
    bool isEvenOddTree(TreeNode *root)
    {
        int level = 0;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int sz = q.size();
            int prev_val;
            if (level % 2 == 0)
            {
                prev_val = INT_MIN;
            }
            else
                prev_val = INT_MAX;
            for (int i = 0; i < sz; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                if (level % 2 == 0 and (node->val % 2 == 0 or prev_val >= node->val))
                    return false;
                else if (level % 2 == 1 and (node->val % 2 == 1 or prev_val <= node->val))
                    return false;
                prev_val = node->val;
                if (node->left)
                {
                    q.push(node->left);
                }
                if (node->right)
                {
                    q.push(node->right);
                }
            }
            level++;
        }
        return true;
    }
};