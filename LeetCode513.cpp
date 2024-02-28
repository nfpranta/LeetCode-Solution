class Solution
{
public:
    int findBottomLeftValue(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        int ans;
        while (!q.empty())
        {
            TreeNode *top = q.front();
            q.pop();
            ans = top->val;
            if (top->right)
            {
                q.push(top->right);
            }
            if (top->left)
            {
                q.push(top->left);
            }
        }
        return ans;
    }
};