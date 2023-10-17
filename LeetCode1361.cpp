class Solution
{
public:
    int findRoot(int n, vector<int> left, vector<int> right)
    {
        unordered_set<int> s;
        s.insert(left.begin(), left.end());
        s.insert(right.begin(), right.end());
        for (int i = 0; i < n; i++)
        {
            if (s.find(i) == s.end())
                return i;
        }
        return -1;
    }
    bool validateBinaryTreeNodes(int n, vector<int> left, vector<int> right)
    {
        int root = findRoot(n, left, right);
        if (root == -1)
            return false;
        unordered_set<int> seen;
        stack<int> s;
        seen.insert(root);
        s.push(root);
        while (!s.empty())
        {
            int node = s.top();
            s.pop();
            int lChild = left[node];
            int rChild = right[node];
            if (lChild != -1)
            {
                if (seen.find(lChild) != seen.end())
                    return false;
                seen.insert(lChild);
                s.push(lChild);
            }
            if (rChild != -1)
            {
                if (seen.find(rChild) != seen.end())
                    return false;
                seen.insert(rChild);
                s.push(rChild);
            }
        }
        return seen.size() == n;
    }
};